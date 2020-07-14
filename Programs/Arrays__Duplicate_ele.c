/******************************************************************************

Find if the given array is a subset of another array. Asuuming arrays can be sorted or unsorted and do not hav any duplicate elements. Also,m>n which are the sizes of the corresponting arrays, Am,An.
*INPUT*:
m=6
Am=[11,1,13,21,3,7]
n=4
An=[11,3,7,1]

*OUTPUT*:
Yes

*******************************************************************************/

#include <stdio.h>


int array_duplicates(int An[], int n) 
{
    int i,j;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(An[i]==An[j])
                printf("%d\n",An[j]);
        }
    }
}

int main()
{
    int n, i;
    
    printf ("Enter the size of array ");
    scanf ("%d", &n);
    
    int An[n];
    
    printf ("Enter the array elements\n");
    for (i = 0; i < n; i++)
    {
        scanf ("%d", &An[i]);
    }
    
    array_duplicates(An,n);
    
    return 0;
}
