#include<stdio.h>
#include<stdlib.h>
 

void productArray(int a[], int b)
{
 
  int *left = (int *)malloc(sizeof(int)*b);
  int *right = (int *)malloc(sizeof(int)*b);
 
 
  int *product = (int *)malloc(sizeof(int)*b);
 
  int i, j;
 
 
  left[0] = 1;
 
  /* Rightmost most element of right array is always 1 */
  right[b-1] = 1;
 
  /* Construct the left array */
  for(i = 1; i < b; i++)
    left[i] = a[i-1]*left[i-1];
 
  /* Construct the right array */
  for(j = b-2; j >=0; j--)
    right[j] = a[j+1]*right[j+1];
 
  /* Construct the product array using
    left[] and right[] */
  for (i=0; i<b; i++)
    prod[i] = left[i] * right[i];
 
  /* print the constructed prod array */
  for (i=0; i<b; i++)
    printf("%d ", product[i]);
 
  return;
}
 
/* Driver program to test above functions */
int main()
{
  int a[] = {10, 3, 5, 6, 2};
  int b = sizeof(a)/sizeof(a[0]);
  printf("The product array is: \n");
  productArray(a, b);
  getchar();
}
