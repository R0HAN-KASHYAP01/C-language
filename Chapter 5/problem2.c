#include <stdio.h>

float Celsius_Fehernite(int C){
    return (C * 9/5) + 32;
}
int main(){
    int Celsius;
    printf("Enter temperature in Celsius: \n");
    scanf("%d",&Celsius);
    printf("The temperature of %dC in Fehernite is %f\n", Celsius, Celsius_Fehernite(Celsius));
    
    return 0;
}