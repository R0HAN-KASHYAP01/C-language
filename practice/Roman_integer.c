#include <stdio.h>
int romanToInt(char *s) {
    int num = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == 'I') {
            num += 1;
        } else if (s[i] == 'V') {
            if (i > 0 && s[i - 1] == 'I') {
                num += 3; // 5 - 1 + 1 (since we added 1 for 'I' previously)
            } else {
                num += 5;
            }
        } else if (s[i] == 'X') {
            if (i > 0 && s[i - 1] == 'I') {
                num += 8; // 10 - 1 + 1 (since we added 1 for 'I' previously)
            } else {
                num += 10;
            }
        } else if (s[i] == 'L') {
            if (i > 0 && s[i - 1] == 'X') {
                num += 30; // 50 - 10 + 10 (since we added 10 for 'X' previously)
            } else {
                num += 50;
            }
        } else if (s[i] == 'C') {
            if (i > 0 && s[i - 1] == 'X') {
                num += 80; // 100 - 10 + 10 (since we added 10 for 'X' previously)
            } else {
                num += 100;
            }
        } else if (s[i] == 'D') {
            if (i > 0 && s[i - 1] == 'C') {
                num += 300; // 500 - 100 + 100 (since we added 100 for 'C' previously)
            } else {
                num += 500;
            }
        } else if (s[i] == 'M') {
            if (i > 0 && s[i - 1] == 'C') {
                num += 800; // 1000 - 100 + 100 (since we added 100 for 'C' previously)
            } else {
                num += 1000;
            }
        }
    }
    return num;
}

int main()
{
    char s[4] = "Hell";
    for (int i = 0; i < 7; i++)
    {
        if (s[i])
        {
            /* code */
            printf("%c\n", s[i]);
        }
        else
        {

            printf("Hello world\n");
        }
    }

    return 0;
}