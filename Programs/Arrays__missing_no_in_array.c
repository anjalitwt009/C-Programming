/******************************************************************************

Print the missing number in an array containing numbers from 1 to n in unsorted order.

EXAMPLE:
INPUT:
n=4
A=[1,3,4]

OUTPUT:
[3]

*******************************************************************************/

#include <stdio.h>

int num (int A[], int n)
{
  int total, i;
  total = n * (n + 1) / 2;
  for (i = 0; i < n - 1; i++)
    {
      total = total - A[i];
    }
  return total;
}

int main ()
{
  int n, i, out;
  int A[n];
  printf ("Enter the size of array");
  scanf ("%d", &n);
  printf ("Enter the array elements\n");
  for (i = 0; i < n - 1; i++)
    {
      scanf ("%d", &A[i]);
    }
  out = num (A, n);
  printf ("%d", out);
}
