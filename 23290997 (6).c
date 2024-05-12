#include <stdio.h>
int max(int *a, int s);

int min(int *a, int s);

int main(){
	int size;
	printf("enter the size of the array: ");
	scanf("%d", &size);
	puts("");
	int arr[size];
	printf("enter %d integers: ", size);
	for(size_t i=0; i<size; i++) {
		scanf("%d",&arr[i]);

		}	

	printf("\n\n");
		
	printf("the largest element is %d\n", max(arr, size));
	printf("the smallest element is %d\n", min(arr, size));


	return 0;


	}

int min(int*a, int s){
	int smallest=*a;
	for(size_t i=0; i<s; i++){
	if(*(a+i)<smallest)smallest=*(a+i);
	

		}
	

	return smallest;



	}

int max(int*a, int s){
	int biggest=*a;
	for(size_t i=0; i<s; i++){
	if(*(a+i)>biggest)biggest=*(a+i);
	

		}
	

	return biggest;



	}

