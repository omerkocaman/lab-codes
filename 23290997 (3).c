#include <stdio.h>
void get_input (int size, int numbers[]);
void print_input(int size, int numbers[]);
float average(int size, int munbers[]);
void print_deviation(int size, int numbers[]);


int main(){

	int size;
	scanf("%d", &size);
	int numbers[size];
	get_input(size, numbers);
	print_input(size, numbers);
	printf("\n%.2f\n", average(size,numbers));
	print_deviation(size, numbers);
	return 0;

}

void get_input (int size, int numbers[]) {
	
	for(size_t i=0;i<size;++i){
		printf("enter an element: ");
		scanf("%d", &numbers[i]);
		puts("");
		
	}

}

void print_input(int size, int numbers[]){

	for(size_t i=0;i<size;++i){

		printf("%d ", numbers[i]);
	}

}

float average(int size, int numbers[]){
	int c=0;
	for(size_t i=0;i<size;++i){
		c+=numbers[i];
		
	}

	return (c/size);
}

void print_deviation(int size, int numbers[]){

	for(size_t i=0;i<size;++i){
printf("%.2f ", numbers[i]-average(size, numbers));

}

}





//for(size_t i=0;i<size;++i){
//		if (numbers[i]>=average(size,numbers)){printf("%d - %.2f = %.2f", numbers[i], average(size, numbers), numbers[i]-average(size,numbers) ); puts("");}
//		else {printf("%.2f - %d = %.2f",average(size, numbers), numbers[i], average(size,numbers)-numbers[i] ); puts("");}
		
		
	//}

