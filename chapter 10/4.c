#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *ptr;
    ptr = fopen("employee.txt", "w");
    char name[20];
    int salary;
    for (int i = 0; i < 2; i++)
    {
        printf("Enter the name of the employee:-\n");
        scanf("%s", name);
        printf("Enter the salary of the employee:-\n");
        scanf("%d", salary);
        fprintf(ptr, "%s", name);
        fputc(',', ptr);
        fprintf(ptr, "%d", salary);
        fputc('\n', ptr);
    }

    return 0;
}