#include <stdio.h>
#include <string.h>

typedef struct Date {
    int Day;
    int Month;
    int Year;
} Date;

void Display(Date D[], int size) {
    for (int i = 0; i < size; i++) {
        printf("The date is %d-%d-%d\n", D[i].Day, D[i].Month, D[i].Year);
    }
}

int main() {
    Date D[10];
    int size = 3;
    for (int i = 0; i < size; i++) {
        printf("Enter the Day: ");
        scanf("%d", &D[i].Day);
        printf("Enter the Month: ");
        scanf("%d", &D[i].Month);
        printf("Enter the Year: ");
        scanf("%d", &D[i].Year);
        printf("\n");
    }
    Display(D, size);

    return 0;
}
