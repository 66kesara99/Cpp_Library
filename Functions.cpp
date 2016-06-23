// Convert an integer to int array

int int2NumArray(int *array, int val, int size){
	for (int i = size-1; i>=0; i--){
		array[i] = val%10;
		val = val/10;
	}
	return 0;
}


// Count the digits in an integer

int countdigits(int val){
	if (val<10)
		return 1;
	else if (val<100)
		return 2;
	else if (val<1000)
		return 3;
	else if (val<10000)
		return 4;
	else if (val<100000)
		return 5;
	else if (val<1000000)
		return 6;
	else if (val<10000000)
		return 7;
	else if (val<100000000)
		return 8;
	else if (val<1000000000)
		return 9;
	else if (val<10000000000)
		return 10;
}


// Find the maximum of an array

int maxofArray(vector<int> &array, int size){
	int max = array[0];

	for (int i = 1; i< size; i++){
		if (max < array[i]){
			max = array[i];
		}
	}
	return max;
}


// find the minimum of an array

int minofArray(vector<int> &array, int size){
	int i, min = array[0];

	for (int j = i; i< size; i++){
		if (min > array[i]){
			min = array[i];
		}
	}
	return min;
}


// Find the minimum of an array ignoring zero

int minofArray(vector<int> &array, int size){
	int i, min = 0;
	for(i = 0; i<size; i++){
		if (array[i]>0){
			min = array[i];
			break;
		}
	}

	if (min == 0){
		return 0;
	}

	for (int j = i; i< size; i++){
		if (min > array[i] && array[i] != 0){
			min = array[i];
		}
	}
	return min;
}
