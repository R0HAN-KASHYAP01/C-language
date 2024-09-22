#include <stdio.h>
double myPow(double x, int n) {
    // Handle the case when n is 0
    if (n == 0) {
        return 1;
    }

    // Handle negative exponent
    if (n < 0) {
        x = 1 / x; // Invert the base
        // Use long long to avoid overflow issues with n = INT_MIN
        long long abs_n = (long long)n; 
        n = -abs_n; // Make the exponent positive
    }
    
    // Compute power for positive exponent
    double result = 1;
    while (n > 0) {
        if (n % 2 == 1) { // If n is odd
            result *= x;
        }
        x *= x; // Square the base
        n /= 2; // Halve the exponent
    }
    
    return result;
}

int main(){
    
    return 0;
}