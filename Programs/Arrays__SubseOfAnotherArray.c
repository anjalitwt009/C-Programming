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


int array_subset(int Am[],int An[],int m, int n) 
{
   
  int C[m];
  int count=0,i,j;
  for (i=0;i<n;i++)
  {
    for (j=0;j<m;j++)
    {
        if (An[i]==Am[j])
        {
            C[i]=An[i];
            count=count+1;
        }
    }
  }
  
  if (count>0)
    printf("Yes");
  else
    printf("No");
}

int main()
{
    int n, i, m;
    int Am[n],An[n];
    
    printf ("Enter the size of first array ");
    scanf ("%d", &m);
    printf ("Enter the array elements\n");
    for (i = 0; i < m; i++)
    {
        scanf ("%d", &Am[i]);
    }
    
    printf ("Enter the size of second array ");
    scanf ("%d", &n);
    printf ("Enter the array elements\n");
    for (i = 0; i < n; i++)
    {
        scanf ("%d", &An[i]);
    }
    
    array_subset(Am,An,m,n);
    
    return 0;
}
