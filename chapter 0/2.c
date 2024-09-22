#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int RandomNumberGenerator(int n) {
    return rand() % n;
}

/*
0 --> rock
1 --> paper
2 --> scissors

0 & 1 >> paper wins 1
1 & 2 >> scissors wins 2
2 & 0 >> rock wins 0

*/

int main() {
    srand(time(NULL));  // Seed the random number generator once at the beginning

    int i = 0, choice, compt;
    int scoreuser = 0, scorecompt = 0;
    char user[30];

    printf("<--- ROCK, PAPER & SCISSORS --->\n");
    printf("\n***Enter your name***\n");
    scanf("%s", user);  // Corrected: pass user directly
    printf("\nSelect one as per your choice:\n");
    printf("Press 0 for ROCK\nPress 1 for PAPER\nPress 2 for SCISSORS\n");

    while (i < 3) {
        printf("ROUND %d:\n", (i + 1));
        printf("%s's Turn\nEnter your choice:\n", user);
        scanf("%d", &choice);
        compt = RandomNumberGenerator(3);  // Corrected: Use 3 to get a number between 0 and 2

        switch (compt) {
            case 0:
                printf("Computer chooses ROCK!\n\n");
                break;
            case 1:
                printf("Computer chooses PAPER!\n\n");
                break;
            case 2:
                printf("Computer chooses SCISSORS!\n\n");
                break;
            default:
                break;
        }

        if (choice == 0 && compt == 1) {
            printf("Paper Wins!!\nWhich means COMPUTER got a point!!\n");
            scorecompt++;
        } else if (choice == 1 && compt == 2) {
            printf("SCISSORS Wins!!\nWhich means COMPUTER got a point!!\n");
            scorecompt++;
        } else if (choice == 2 && compt == 0) {
            printf("ROCK Wins!!\nWhich means COMPUTER got a point!!\n");
            scorecompt++;
        } else if (compt == 0 && choice == 1) {
            printf("Paper Wins!!\nWhich means %s got a point!!\n", user);
            scoreuser++;
        } else if (compt == 1 && choice == 2) {
            printf("SCISSORS Wins!!\nWhich means %s got a point!!\n", user);
            scoreuser++;
        } else if (compt == 2 && choice == 0) {
            printf("ROCK Wins!!\nWhich means %s got a point!!\n", user);
            scoreuser++;
        } else if (compt == choice) {
            printf("Nobody wins!!\nTIE!!\n");
        }

        i++;
    }

    if (scoreuser > scorecompt) {
        printf("\n%s Wins!!\n", user);
    } else if (scorecompt > scoreuser) {
        printf("\nCOMPUTER Wins!!\n");
    } else {
        printf("\nIt's a TIE!!\n");
    }

    return 0;
}
