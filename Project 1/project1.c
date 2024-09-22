#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
    srand(time(0));
    int random_number = (rand() % 100 + 1);
    int guessed_number;
    int turns = 0;
    do
    {
        printf("Guess the number: ");
        scanf("%d", &guessed_number);
        if (guessed_number < random_number)
        {
            printf("Higher number please!\n");
        }
        else if (guessed_number > random_number)
        {
            printf("Lower number please!\n");
        }
        else{
            printf("Congrats!!\n");
        }
        turns++;
        
    } while (guessed_number != random_number);
    printf("You guessed the correct number in %d turns.\n", turns);
    
    return 0;
}