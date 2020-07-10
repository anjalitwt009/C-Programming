/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    printf("Hello World\n");
    int ROWS=5;
    int COLS=5;
    int row,col;
    
    for(row=0; row<ROWS; row++)
        {
            for(col=1; col<=row; col++)
                {
                    printf(" ");
                }
            for(col=1; col<=ROWS-row; col++)
                {
                    printf("* ");
                }
            printf("\n");
        }
    
    return 0;
}
