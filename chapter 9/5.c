#include <stdio.h>
#include <string.h>

typedef struct Complex
{
    int real;
    int img;
}C_num;

int main(){
    C_num num1;
    printf("Enter the Real and imaginary number:-\n");
    scanf("%d %d",&num1.real, &num1.img);
    printf("The Complex number is %d + %di\n", num1.real,num1.img);
    return 0;
};