#include <stdio.h>

int main(){
    int i = 56;
    int** j = &i;
    printf("The value of i is %d\n", j);
    return 0;
}