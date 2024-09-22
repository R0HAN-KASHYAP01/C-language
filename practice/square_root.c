#include <stdio.h>

int mySqrt(int x) {
    if (x < 0) {
        return -1;  
    } else if (x == 0) {
        return 0;
    }

    double guess = x;
    double precision = 1e-7;  

    while (1) {
        double next_guess = 0.5 * (guess + x / guess);
        if (fabs(next_guess - guess) < precision) {
            break;
        }
        guess = next_guess;
    }
    
    return (int)guess;
}

int main(){
    
    return 0;
}