#include <stdio.h>
bool isValid(char *s)
{
    int is_valid = 0;
    for (int i = 0; s[i]!= '\0'; i+2)
    {
        if ((int)s[i]== 40 && (int)s[i+1]== 41)
        {
            is_valid = 1;
        }
        else if ((int)s[i]== 91 && (int)s[i+1]== 93)
        {
            is_valid = 1;
        }
        else if ((int)s[i]== 123 && (int)s[i+1]== 125)
        {
            is_valid = 1;
        }
        
    }
    if (is_valid)
    {
        return true;
    }
    return false;
    
       
}
int main()
{

    return 0;
}