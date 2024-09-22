#include <stdio.h>
#include <string.h>

typedef struct Complex
{
    int real;
    int img;
} C_num;

void Display(struct Complex numbers[])
{
    for (int i = 0; i < 5; i++)
    {
        printf("The Complex number is %d + %di\n", numbers[i].real, numbers[i].img);
    }
}
int main()
{
    C_num numbers[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the Real and imaginary number%d:-\n", i);
        scanf("%d %d", &numbers[i].real, &numbers[i].img);
    }
    Display(numbers);
};