#include <stdio.h>
int lengthOfLastWord(char *s)
{
    int length = 0;
    int rest_length;
    while (s[length] != '\0')
    {
        length++;
    }
    printf("%d\n", length);
    for (int i = length - 1; i >= 0; i--)
    {
        for (int j = 1; j < length; j++)
        {
            if ((int)s[i] == 32 && (int)s[length-1 - j] != 32)
            {
                rest_length = i + 1;
                break;
            }
        }
    }
    printf("%d\n", rest_length);
    return length - rest_length;
}
int main()
{
    char s[] = "   fly me   to   the moon  ";
    int a = lengthOfLastWord(s);
    printf("%d\n", a);

    return 0;
}