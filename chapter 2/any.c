/*
Number guessing game
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{
    printf("\t|-----------------------------------|\n");
    printf("\t|        NUMBER GUESSING GAME       |\n"); // Title
    printf("\t|-----------------------------------|\n");

    
    char choice;
    int compt, user, score = 100;

    
    srand(time(0));

    printf("\n\nselect difficulty level\n");
    printf("EASY(E)     ~       MEDIUM(M)     ~     HARD(H)\n\n"); // selecting dificulty level
    printf("Select mode as per your choice:\n");
    scanf("%c", &choice);

    
    if (choice == 'e' || choice == 'E')
    {
        printf("\nYou choose EASY mode\n");
        printf("\nINSTRUCTIONS:\n1.  Computer guess a number between 1 to 100.\n2.  You have 10 chances for guessing the number.\n3.  If you guess the number correctly you WIN.\n4.  If you don't guess the number correctly you LOOSE.\n5.  You got your score according to the number of chances you take.\n");

        compt = rand() % 100 + 1;
        printf("\nComputer got a secret number\n");

        for (int i = 0; i < 10; i++)
        {
            printf("\nGuess the number:\n");
            scanf("%d", &user);

            if (user > compt)
            {
                printf("LOWER NUMBER PLEASE!!\n\n");
                score = score - 10;
            }
            else if (compt > user)
            {
                printf("HIGHER NUMBER PLEASE!!\n\n");
                score = score - 10;
            }
            else if (compt == user)
            {
                printf("CONGRATULATIONS!!\nYOU GUESS IT CORRECT\nTHE NUMBER IS %d\n", compt);
                printf(" ________________________\n");
                printf("|      SCORE : %d       |\n", score);
                printf("|_______________________|\n");
                break;
            }
        }

        if (compt != user)
        {
            printf("You loose!!\n");
            printf(" ________________________\n");
            printf("|      SCORE : %d        |\n",(rand() % 10));
            printf("|_______________________|\n");
        }
    }
   
   
    else if (choice == 'm' || choice == 'M')
    {
        printf("\nYou choose MEDIUM mode\n");
        printf("\nINSTRUCTIONS:\n1.  Computer guess a number between 1 to 100.\n2.  You have 7 chances for guessing the number.\n3.  If you guess the number correctly you WIN.\n4.  If you don't guess the number correctly you LOOSE.\n5.  You got your score according to the number of chances you take.\n");

        compt = rand() % 100 + 1;
        printf("\nComputer got a secret number\n");

        for (int i = 0; i < 7; i++)
        {
            printf("\nGuess the number:\n");
            scanf("%d", &user);

            if (user > compt)
            {
                printf("LOWER NUMBER PLEASE!!\n\n");
                score = score - 15;
            }
            else if (compt > user)
            {
                printf("HIGHER NUMBER PLEASE!!\n\n");
                score = score - 15;
            }
            else if (compt == user)
            {
                printf("CONGRATULATIONS!!\nYOU GUESS IT CORRECT\nTHE NUMBER IS %d\n", compt);
                printf(" ________________________\n");
                printf("|      SCORE : %d       |\n", score);
                printf("|_______________________|\n");
                break;
            }
        }

        if (compt != user)
        {
            printf("You loose!!\n");
            printf(" ________________________\n");
            printf("|      SCORE : %d        |\n",(rand() % 10));
            printf("|_______________________|\n");
        }
    }
    
    
    else if (choice == 'h' || choice == 'H')
    {
        printf("\nYou choose HARD mode\n");
        printf("\nINSTRUCTIONS:\n1.  Computer guess a number between 1 to 100.\n2.  You have 5 chances for guessing the number.\n3.  If you guess the number correctly you WIN.\n4.  If you don't guess the number correctly you LOOSE.\n5.  You got your score according to the number of chances you take.\n");

        compt = rand() % 100 + 1;
        printf("\nComputer got a secret number\n");

        for (int i = 0; i < 5; i++)
        {
            printf("\nGuess the number:\n");
            scanf("%d", &user);

            if (user > compt)
            {
                printf("LOWER NUMBER PLEASE!!\n\n");
                score = score - 20;
            }
            else if (compt > user)
            {
                printf("HIGHER NUMBER PLEASE!!\n\n");
                score = score - 20;
            }
            else if (compt == user)
            {
                printf("CONGRATULATIONS!!\nYOU GUESS IT CORRECT\nTHE NUMBER IS %d\n", compt);
                printf(" ________________________\n");
                printf("|      SCORE : %d       |\n", score);
                printf("|_______________________|\n");
                break;
            }
        }

        if (compt != user)
        {
            printf("You loose!!\n");
            printf(" ________________________\n");
            printf("|      SCORE : %d        |\n",(rand() % 10));
            printf("|_______________________|\n");
        }
    }
   
   
    else
    {
        printf("\nChoose a valid mode\n");
    }


    return 0;
}