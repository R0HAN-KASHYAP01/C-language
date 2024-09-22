#include <stdio.h>
#include <string.h>

typedef struct vectors
{
    int i_cap;
    int j_cap;
}vec;

int main(){
    vec v1;
    printf("Enter the I and J cap:-\n");
    scanf("%d %d",&v1.i_cap, &v1.j_cap);
    printf("The vector is %di + %dj\n", v1.i_cap,v1.j_cap);
    return 0;
};