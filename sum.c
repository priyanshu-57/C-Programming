//WAP to add two numbers without using functions.
#include <stdio.h>

void main() {
    int num1=0, sum=0;
	float num2=0 ;
    
    printf("Enter first and second number: ");
    scanf("%d %f", &num1 , &num2);
    
    sum = num1 + num2;
    
    printf("The sum of %d and %f = %d\n", num1, num2, sum);
    
    return 0;
}


