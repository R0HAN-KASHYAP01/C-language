// #include <stdio.h>

// int main(){
//     int i = 0;
//     int sum = 0;
//     while (i<10)
//     {
//         i++;
//         printf("THe value of i %d\n", i);
//         sum += i;
//         printf(" the value of sum %d\n", sum);
//     }
//     printf("The value of first 10 natural number is %d\n", sum);
    
//     return 0;
// }

#include <stdio.h>

int main(){
    int i = 0;
    int sum = 0;
    do
    {
        i++;
        sum += i;
    } while (i<10);
    printf("The value of first 10 natural number is %d\n", sum);
    
    return 0;
}