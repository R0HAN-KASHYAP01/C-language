#include <stdio.h>

int Fibonacci(int n){
    if (n == 1 || n == 2)
    {
        return n-1;
    }
    return Fibonacci(n-2) + Fibonacci(n-1);
    
}
int main(){
    int num;
    scanf("%d", &num);
    printf("The Fibonacci number of number %d is %d\n", num,Fibonacci(num));
    return 0;
}