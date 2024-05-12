#include <stdio.h>

void convert(int array[], int rows, int cols);

int main(){
	int row;
	int column;
	scanf("%d", &row);
	scanf("%d", &column);
	size_t size;
	size = row * column;
	int array[size];
	
	for (size_t n = 0; n< size; n++) {

		scanf("%d", &array[n]);

		}

	convert(array, row, column);
	

}


void convert(int array[], int rows, int cols) {

	int array2[rows][cols];
	
	int size = rows*cols;
	
	for (size_t n = 0; n< rows; n++) {

		for (size_t m = 0; m< cols; m++){
			
			array2[n][m]=array[m+(n*cols)];			

	
			}

		}





	for (size_t n = 0; n< rows; puts(""),n++) {

		for (size_t m = 0; m< cols; m++){

		printf("%5d ", array2[n][m]);





}}

}
