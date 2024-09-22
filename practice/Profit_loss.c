#include <stdio.h>
int maxProfit(int* prices, int pricesSize) {
 int max_profit = prices[1] - prices[0];
 for (int i = 0; i < pricesSize; i++)
 {
    for (int j = i; j < pricesSize; j++)
    {
        if (prices[j] - prices[i] > max_profit)
        {
                max_profit = prices[j] - prices[i];
        }
        
    }
    
 }
 return max_profit;
 
}
int main(){
    
    return 0;
}