#include <stdio.h>
#include <string.h>
typedef struct employee
{
    int code;
    float salary;
    char name[10];
} Emp;

int main(){
    Emp e1;
    e1.code = 556;

    Emp *ptr;
    ptr = &e1;
    printf("%d\n", ptr->code);
    

    return 0;
}