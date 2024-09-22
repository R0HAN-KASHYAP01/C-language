#include <stdio.h>
int nthUglyNumber(int n) {
    if (n == 1)
    {
        return 1;
    }
    
    int num = 2;
    int is_ugly = 0;
    int factors[3] = {2,3,5};
    int j = 0;
    while (j !=n)
    {
        
    for (int i = 0; i < 3; i++)
    {
        while (n % factors[i] == 0)
        {
            n/= factors[i];
        }
        j
        
    }
    }
    
    
}
int main(){
    
    return 0;
}