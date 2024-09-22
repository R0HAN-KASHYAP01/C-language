#include <stdio.h>

// Function to convert the first character of each word to uppercase and the rest to lowercase
void processString(char *s) {
    for (int i = 0; s[i] != '\0'; i++) {
        if ((int)s[i] >= 97 && (int)s[i] <= 122 && (i == 0 || s[i - 1] == ' ')) {
            // Convert lowercase to uppercase if it's the first character or after a space
            s[i] = s[i] - 32;
        } else if ((int)s[i] >= 65 && (int)s[i] <= 90 && !(i == 0 || s[i - 1] == ' ')) {
            // Convert uppercase to lowercase if it's not the first character or not after a space
            s[i] = s[i] + 32;
        }
    }
}

int main() {
    char s[1000]; // Define a sufficiently large array to hold the input string
    scanf("%[^\n]s", s); // Read input including spaces until newline

    processString(s); // Call the function to process the string

    printf("%s\n", s); // Print the modified string

    return 0;
}
