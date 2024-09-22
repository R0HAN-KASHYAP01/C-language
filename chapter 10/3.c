#include <stdio.h>
#include <string.h>


int main(){
    FILE *fptr;
    fptr = fopen("file1.txt", "r");
    char line[50];
    int i= 0;
    char ch;
    while (1)
    {
        if (ch == EOF)
        {
            break;
        }
        ch = fgetc(fptr);
        line[i] = ch;
        i++;
        
    }
    fclose(fptr);
    // FILE *ptr;
    // ptr = fopen("file2.txt", "w");
    strcat(line,line);
    printf("%s\n",line);
    // fprintf(ptr,"%c", line);
    // fclose(ptr);
    
    return 0;
}