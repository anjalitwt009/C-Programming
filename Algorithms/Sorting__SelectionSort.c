/******************************************************************************

SELECTION SORT:

1.Scan the list. Find the minimum element.
2.Swap the minimum element with the value in the first position.
3.Swap the second minimum element to second position.
4.Repeat till the complete list is sorted.

Time Complexity=O(n^2)

Space Complexity=O(1)

*******************************************************************************/

#include <stdio.h>

void swap(int *xp, int *yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
}

int main()
{
    int n,i,j,temp;
    printf("Enter the size of array: ");
    scanf("%d",&n);
    int A[n];
    for(i=0;i<n;i++)
    {
        scanf("%d\n",&A[i]);
    }
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(A[j]<A[i])
            {
                swap(&A[j],&A[i]);
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",A[i]);
    }
}
