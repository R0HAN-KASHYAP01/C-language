#include <stdio.h>
// bool isUgly(int n)
// {
//     int is_ugly = 1;
//     int i = 0;
//     while (n >= 1)
//     {
//         if ((n % i == 0) && (i > 5))
//         {
//             is_ugly = 0;
//         }
//         else if (n % i != 0)
//         {
//             i++;
//         }
//     }
// }
int main()
{
    int n = 28;
    int is_ugly = 1;
    int factor;
    int i = 2;
    while (n > 1)
    {
        factor = n % i;
        // n /= i;
        printf("Factor %d\n", factor);
        printf("num %d\n", n);
        printf("i %d\n", i);
        if ((factor == 0) && (i <= 5))
        {
            is_ugly = 1;
            n /= i;
        }
        else if ((factor == 0) && (i > 5))
        {
            is_ugly = 0;
            break;
        }
        else if (factor != 0)
        {
            i++;
        }
    }
    printf("is_ugly %d\n", is_ugly);
    return 0;
}