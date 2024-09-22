#include <stdio.h>
int lengthOfLongestSubstring(char* s) {
    char start = s[0];
    int max = 0;
    if (start = "\0")
    {
        return 0;
    }
    
    for (int i = 0; s[i] != "\0"; i++)
    {
        if (start == s[i])
        {
            start = s[i+1];
        }
        if (max < i+1)
        {
            max = i+1;
        }
          
    }
    return max;
    
}

int main(){
    
    return 0;
}