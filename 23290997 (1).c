#include <stdio.h>

int main(){

int a, biggest, smallest;
a=0;
biggest=0;
smallest=0; //initializing the variables

printf("Enter a sequence of integers (enter 0 to stop)\nEnter an integer: ");
scanf("%d", &a);
if (a==0) {
	printf("No numbers were entered.\n");
}
else {

smallest=a;
biggest=a;


 
while(a!=0){

printf("Enter an integer: ");
scanf("%d", &a);
if(a<smallest && a!=0){
	smallest = a;	
}
else if (a>biggest) {

	biggest=a;

}




} //end of while

if (a==0){

printf("The largest number is: %d\n", biggest);
printf("The smallest number is: %d\n", smallest); 
} //end of if


}
}	







