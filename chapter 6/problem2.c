#include <stdio.h>
int Address(int a){
    int* j = &a;
    return j;
}
int main(){
    int i = 45;
    printf("The address of i is %p\n", &i);
    printf("The address of i is %p\n", Address(i));
    return 0;
}