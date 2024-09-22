#include <stdio.h>
int isPalindrome(char* s) {
    int i = 0, j = 0;

    // Loop through each character in the sing
    while (s[i] != '\0') {
        // Check if the character is a letter (a-z, A-Z) or a digit (0-9)
        if ((s[i] >= 'a' && s[i] <= 'z') || 
            (s[i] >= 'A' && s[i] <= 'Z') || 
            (s[i] >= '0' && s[i] <= '9')) {
            // If it's alphanumeric, keep it in the sing
            s[j++] = s[i];
        }
        // Move to the next character
        i++;
    }
    // Null-terminate the modified sing
    s[j] = '\0';
}


int main(){
    
    return 0;
}