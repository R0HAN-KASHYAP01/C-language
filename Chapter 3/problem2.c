#include <stdio.h>

int main()
{
    int physics, chemistry, Math;
    printf("Enter the marks of Physics\n");
    scanf("%d", &physics);
    printf("Enter the marks of Chemistry\n");
    scanf("%d", &chemistry);
    printf("Enter the marks of Math\n");
    scanf("%d", &Math);
    float average = (physics+chemistry+Math)/ 3;
    if (average >= 33)
    {
        printf("You Passed the test with percentage of %f \n", average);
    }
    else{
        printf("You failed the test with percentage of %f\n",average);
    }    
    return 0;
}