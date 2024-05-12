#include <stdio.h>

int main(){

int num, original, sum;

printf("Enter an integer: ");
scanf("%d", &num);

original = num;
sum=0;

while (num != 0) {

sum+=num%10;
num=(num-(num%10))/10;


}

if (original%sum==0) printf("%d is a harshad.", original);
else printf("%d is not a harshad.", original);




}
