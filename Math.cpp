#include <iostream>
#include <stdio.h>

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

int main(){
	int n = 5, a = 100, b = 80;
	int* primes = primesBelowX(10);
	for (n = 0; n < 4; n++){
		cout << primes[n] << "\n";
	}
}