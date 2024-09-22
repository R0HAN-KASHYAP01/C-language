#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int player, computer;
    char *lst[3]= {"Snake","Water","Gun"};
    int play = 1;
    srand(time(0));
    while (play)
    {
        printf("Choose any one:-\n");
        printf("0 -> Snake\n");
        printf("1 -> Water\n");
        printf("2 -> Gun\n");
        scanf("%d",&player);
        computer = rand() % 3;
        printf("Your Choice is %s\n", lst[player]);
        printf("Computer Choice is %s\n", lst[computer]);
        
        if (player == 0 && computer == 0)
        {
            printf("Match Tie!\n");
        }

        else if (player == 0 && computer == 1)
        {
            printf("You Won!\n");
        }
        
        else if (player == 0 && computer == 2)
        {
            printf("You Lost!\n");
        }
        
        else if (player == 1 && computer == 0)
        {
            printf("You Lost!\n");
        }
        
        else if (player == 1 && computer == 1)
        {
            printf("Match Tie!\n");
        }
        
        else if (player == 1 && computer == 2)
        {
            printf("You Won!\n");
        }
        
        else if (player == 2 && computer ==0)
        {
            printf("You Won!\n");
        }
        
        else if (player ==2 && computer == 1)
        {
            printf("You Lost! \n");
        }

        else if (player ==2 && computer == 2)
        {
            printf("Match Tie!\n");
        }
        
        printf("Do you want to play again:-\n");
        printf("0 -> No\n");
        printf("1 -> Yes\n");
        scanf("%d",&play);
        printf("\n");
    }

    return 0;
}