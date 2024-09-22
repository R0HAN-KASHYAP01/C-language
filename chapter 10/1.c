#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("integer.txt", "r");
    int num;
    for (int i = 0; i < 3; i++)
    {
        fscanf(ptr, "%d", &num);
        printf("The number %d is %d\n", i+1, num);
    }
    fclose(ptr);
    return 0;
}