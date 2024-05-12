#include <stdio.h>


void insertInOrder(int  arr[],  int  size,  int  newElement);

void printArray(int arr[], int size);

int main() {

	size_t size;
	printf("Enter the size of the array: ");
	scanf("%u", &size);
	size +=1;
	int arr[size];
	puts("");
	printf("Enter the elements of the array (in ascending order):");
	puts("");
	
	for (size_t i=0;i<size-1;++i) {
		int a;
		scanf("%d", &a);
		arr[i]=a;
		puts("");
		
	}
	arr[size]=0;
	int newElement;
	printf("Enter the new element to be inserted: ");
	scanf("%d", &newElement);
	puts("");

	insertInOrder(arr, size, newElement);
	printArray(arr, size);








}

//2 4 6 8

void insertInOrder(int  arr[],  int  size,  int  newElement){
for (size_t i=0; i<size; ++i){
	int hold, hold2;
	if (newElement>arr[i]) {continue;}
	else { 
		hold=arr[i];
		arr[i]=newElement;		
		
		for (size_t a=size;a>i+1;--a){
			arr[a]=arr[a-1];
		}
		arr[i+1]=hold;
		break;

		}

	}

}

void printArray(int arr[], int size){

for(size_t i=0;i<size;++i){

printf("%d ", arr[i]);
}



}

