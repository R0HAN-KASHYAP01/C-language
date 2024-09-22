#include <stdio.h>

void Value_reference(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main(){
    int a = 5, b = 4;
    Value_reference(&a,&b);
    printf("The value of a is %d and the value of b is %d\n", a, b);
    return 0;
}