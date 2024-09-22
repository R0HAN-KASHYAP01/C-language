#include <stdio.h>

int main(){
    FILE *ptr;
    ptr = fopen("double.txt","r");
    int num;
    fscanf(ptr,"%d",&num);
    printf("%d\n",num);
    ptr = fopen("double.txt","w");
    int doubles = num*2;
    printf("%d\n",doubles);
    fprintf(ptr,"%d",doubles);
    return 0;
}