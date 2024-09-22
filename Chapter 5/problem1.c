#include <stdio.h>


float average(int a , int b, int c){
    return (a+b+c)/3;
}
int main(){
    int num1,num2,num3;
    printf("Enter number1: ");
    scanf("%d",&num1);
    printf("Enter number2: ");
    scanf("%d",&num2);
    printf("Enter number3: ");
    scanf("%d",&num3);
    printf("The sum of the numbers %d,%d,%d is %f\n", num1 , num2, num3, average(num1,num2,num3));
    return 0;
}