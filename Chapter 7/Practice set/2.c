#include <stdio.h>

int main(){
    int S[3] = {1,2,3};
    int* ptr = &S[0];
    printf("The value of S using the pointer *(S+3) is %d\n", *(S+3));
    return 0;
}