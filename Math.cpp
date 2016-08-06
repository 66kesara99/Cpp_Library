#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

//factorial

int factorial(int n){
	int i,fact = 1;
	for (i = 1; i <= n; i++){
		fact = fact*(i);
	}
	return fact;
}

// Greatest Common Devisor

int GCD(int a, int b){
	int k;
	while(b!=0){
		k = a%b;
		a = b;
		b = k;
	}
		
	return a;
}

// Prime Numbers Under a Value

int* primesBelowX(int x){
	static int primes[100000] = {2,3,0};
	int i,counter,check, temp;
	
    i = 0;

    while (primes[i] <= x){
        i = i+1;

        if (primes[i] == 0){
            counter = primes[i-1];
		    check = 0;
			while (check == 0){
				counter++;
				if (counter%2 !=0 && counter%3 !=0){
					temp = 4;
					while (temp*temp <= counter){
						if (counter%temp == 0){
							break;
						}
						temp = temp+1;
					}
					if (temp*temp>counter){
						primes[i] = counter;
						check = 1;
					}
				}    
			}
		}
	}
	cout << i << "\n";
	return primes;
}


// Get permutation of string array

int permutation(string *str){

	string s = *str;
	
	// Find the longest acending array
	int i;
	for (i = s.length()-2; i>=0; i--){
		if (s[i] < s[i+1]){
			break;
		}
	}

	if (i == -1){
		return 1;
	}

	// Get the next permutation
	else{
		for (int j = s.length()-1; j>i; j--){
			if (s[j]>s[i]){
				swap(s[j],s[i]);
				break;
			}
		}
		string temp;

		for (int j = 0; j<=i;j++){
			temp = temp+s[j];
		}
		for (int j = s.length()-1; j>i;j--){
			temp = temp+s[j];
		}
		*str = temp;
	}
	return 0;
}

int main(){
	string s = "abc";
	int a;

	do {
		cout << s << endl;
		a = permutation(&s);
	} while(a == 0);

	return 0;
}