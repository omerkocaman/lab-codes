#include <stdio.h>

void reverseArray(int *arr, int size);

int main(){

int size;
scanf("%d", &size);

int arr[size];
	

for(size_t n = 0; n<size; n++){

	scanf("%d", &arr[n]);

	}

printf("Original Array: ");

for(size_t n = 0; n<size; n++){

	printf("%d ", arr[n]);

	}
puts("");

printf("Reversed Array: ");
reverseArray(arr, size);
for(size_t n = 0; n<size; n++){

	printf("%d ", arr[n]);

	}




}

void reverseArray(int *arr, int size){

for (size_t n=0; n<size/2; n++){

	int hold=arr[n];
	arr[n]=arr[size-1-n];
	arr[size-1-n]=hold;

	}






}
