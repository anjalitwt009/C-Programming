/******************************************************************************

Count the number of zeros in reverse sorted array containing 0 and 1
Example 1:
*INPUT*:
n=5
A=[1,1,1,0,0]
*OUTPUT*:
2

Example 2:
*INPUT*:
n=5
A=[1,1,1,1,1]
*OUTPUT*:
0

*******************************************************************************/

#include <stdio.h>

int zero_count(int A[], int n) {
   
   int p=0,i,loop;
   
   for (i=n-1;i>=0;i--)
   {
        if (A[i]==0)
            p++;
        else
            break;
   }

    return p;
}

int main()
{
    int n, i, count;
    int A[n];
    
    printf ("Enter the size of array ");
    scanf ("%d", &n);
    printf ("Enter the array elements (0s and 1s) in reverse sorted order\n");
    for (i = 0; i < n; i++)
    {
        scanf ("%d", &A[i]);
    }
    count = zero_count(A,n);
    printf("%d",count);
    return 0;
}
