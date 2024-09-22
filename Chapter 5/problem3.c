#include <stdio.h>

float Force(float m){
    return m * 9.8;
}
int main(){
    float mass;
    printf("Enter the mass:\n");
    scanf("%f", &mass);
    printf("The force of attraction on mass %.2fgrams is %.2f\n", mass, Force(mass));
    return 0;
}