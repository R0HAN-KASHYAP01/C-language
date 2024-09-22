#include <stdio.h>

int main(){
    int income;
    printf("Enter the income\n");
    scanf("%d",&income);
    float tax;
    if (income >= 250000 && income <= 500000)
    {
        tax = income * 0.05;
        printf("Your income is %d and the tax you have to paid of 5%% and that is %f\n", income , tax);
    }
    else if (income >= 500000 && income <= 1000000)
    {
        tax = income * 0.2;
        printf("Your income is %d and the tax you have to paid of 20%% and that is %f\n", income , tax);
    }
    else if (income >= 1000000)
    {
        tax = income * 0.3;
        printf("Your income is %d and the tax you have to paid of 30%% and that is %f\n", income , tax);
    }
    else{
        printf("Your income is %d and you have not to paid any tax.\n", income);
    }

    
    return 0;
}