#include <stdio.h>

int main(){
    int Three_D[3][3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    // int* ptr = &Three_D[0];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)
            {
                printf("The address of Three_D[%d][%d][%d] is %u\n",i,j,k &(Three_D[i][j][k]));
            }
            
        }
        
    }
    
    return 0;
}