/******************************************************************************

Find the transition point in an array containing sorted 0 and 1. Print -1 for all 0s or all 1s.
Example 1:
INPUT:
n=5
A=[0,0,0,1,1]
OUTPUT:
3

Example 2:
INPUT:
n=5
A=[1,1,1,1,1]
OUTPUT:
-1

*******************************************************************************/

#include <stdio.h>

int transition_pt(int A[], int n) {
   
   int p=0,i,loop;
   
   for (i=0;i<n;i++)
   {
        if (A[i]==0)
            p++;
        else
            break;
   }

    if (p==n || p==0)
        return (-1);
    else
        return p;
}

int main()
{
    int n, i, count;
    int A[n];
    
    printf ("Enter the size of array ");
    scanf ("%d", &n);
    printf ("Enter the array elements (0s and 1s) in sorted order\n");
    for (i = 0; i < n; i++)
    {
        scanf ("%d", &A[i]);
    }
    count = transition_pt(A,n);
    printf("%d",count);
    return 0;
}
