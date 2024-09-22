#include <stdio.h>
int addDigits(int num)
{
    int new_num = 0;
    int rem;
    int i = 1;
    while (i < 5)
    {
        i++;

        rem = num % 10;
        new_num += rem;
        num /= 10;
        printf(" the new num is %d\n", new_num);
        printf(" the num is %d\n", num);

        if (new_num >= 10)
        {
            num = new_num;
            new_num = 0;
        }
        }
    return num;
}
int main()
{
    int num = 38;
    int a = addDigits(num);
    printf("%d\n", a);
    return 0;
}