#include <stdio.h>
#include <string.h>

typedef struct vectors
{
    int i_cap;
    int j_cap;
}vec;

int main(){
    vec v1;
    vec v2;
    printf("Enter the I and J cap of vector 1:-\n");
    scanf("%d %d",&v1.i_cap, &v1.j_cap);
    printf("Enter the I and J cap of vector 2:-\n");
    scanf("%d %d",&v2.i_cap, &v2.j_cap);
    printf("The vector 1 is %di + %dj\n", v1.i_cap,v1.j_cap);
    printf("The vector 2 is %di + %dj\n", v2.i_cap,v2.j_cap);
    int sum_i = v1.i_cap + v2.i_cap;
    int sum_j = v1.j_cap + v2.j_cap;

    printf("The sum of vector 1 and vector 2 is %di + %dj\n",sum_i,sum_j);
    return 0;
};