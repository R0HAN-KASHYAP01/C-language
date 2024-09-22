#include <stdio.h>
int main()
{
    float answer;
    float num;
    char operation;
    printf("Enter the number:\n");
    scanf("%f", &num);
    answer = num;
    do
    {
        printf("Enter the operation (+, -, *, /):\n");
        scanf(" %c", &operation); 

        if (operation == '+')
        {
            printf("Enter the number:\n");
            scanf("%f", &num);
            answer = answer + num;
        }
        else if (operation == '-')
        {
            printf("Enter the number:\n");
            scanf("%f", &num);
            answer =answer - num;
        }
        else if (operation == '*')
        {
            printf("Enter the number:\n");
            scanf("%f", &num);
            answer = answer * num;
        }
        else if (operation == '/')
        {
            printf("Enter the number:\n");
            scanf("%f", &num);
            answer = answer / num;
        }
        else
        {
            break;
        }

    } while (operation != '=');
    printf("The answer is %f\n", answer);

    return 0;
}