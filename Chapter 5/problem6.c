#include <stdio.h>

int Sum_n(int n){
    if (n == 0)
    {
        return 0;
    }
    else if (n== 1){
        return 1;
    }
    return n + Sum_n(n-1);
}
int main(){
    int n;
    printf("Enter the number:\n");
    scanf("%d", &n);
    printf("The sum of the all the number till %d is %d\n", n, Sum_n(n));
    return 0;
}