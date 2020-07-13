/******************************************************************************

Rotate the elements in an 'n' sized array by 'd' elements in clockwise direction.
*INPUT*:
d=2
n=5
A=[1,2,3,4,5]

*OUTPUT*:
[3,4,5,1,2]

*******************************************************************************/

#include <stdio.h>

int rotate(int A[],int d ,int n) {
   
   int B[n],i,loop;
   
   for (i=0;i<n;i++)
   {
        if ((i+d) < n)
            B[i] = A[i+d];
        else
            B[i]= A[i-(d+1)];
   }
    
    for(loop = 0; loop < n; loop++)
        printf("%d ", B[loop]);
      
    return 0;
}

int main()
{
    int n, i, d;
    int A[n];
    printf("Enter 'd'(number of elements to be shifted cw)");
    scanf ("%d", &d);
    printf ("Enter the size of array");
    scanf ("%d", &n);
    printf ("Enter the array elements\n");
    for (i = 0; i < n; i++)
    {
        scanf ("%d", &A[i]);
    }
    rotate(A,d,n);
    return 0;
}
