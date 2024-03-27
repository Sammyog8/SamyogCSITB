//to read N numbers and find the largest and smallest using DMA and function
#include <stdio.h>
#include <stdlib.h>
int small(int *,int);
int large(int *,int);
int main() 
{
  int *p,i,sm,la,n;
  printf("How many number? ");
  scanf("%d", &n);
  p = (int *)calloc(n, sizeof(int));
  printf("Enter %d numbers:\n",n);
  for (i = 0; i < n; i++)
    scanf("%d", (p + i));
  sm=small(p,n);
  la=large(p,n);
  printf("Smallest = %d and Largest = %d",sm,la);
  free(p);
}
int small(int *p, int n) 
{
    int i,sm = *p;
    for (i = 1; i < n; i++) 
        if (*(p+i) < sm) 
            sm = *(p+i);
    return sm;
}
int large(int *p, int n) 
{
    int i,la = *p;
    for (i = 1; i < n; i++)
        if (*(p+i) > la)
            la = *(p+i);
    return la;
}
