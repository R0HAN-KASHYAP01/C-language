#include <stdio.h>
bool isPowerOfTwo(int n) {
    int is_true = 0;
    if (n == 1)
    {
        return true;
    }
    
    while (n >= 2)
    {
        if (n % 2 == 0)
        {
            is_true = 1;
        }else
        {
            is_true = 0;
        }
        n = n/2;
        
    }
    if (is_true)
    {
        return true;
    }else
    {
        return false;
    }
    
    
    
}
int main(){
    
    return 0;
}