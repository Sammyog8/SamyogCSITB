// to read N numbers using DMA and sort them in ascending order
#include <stdio.h>
#include <stdlib.h>
int main() 
{
  int *p;
  int i,j,n,t;
  printf("How many number? ");
  scanf("%d", &n);
  p = (int *)calloc(n, sizeof(int));
  printf("Enter %d numbers:\n",n);
  for (i = 0; i < n; i++)
    scanf("%d", (p + i));
  for (i = 0; i < n-1; i++)
  	for (j = i+1; j < n; j++)
  		if(*(p+i)>*(p+j))
  		{
  			t=*(p+i);
  			*(p+i)=*(p+j);
  			*(p+j)=t;
		}
  printf("Numbers in ascending order:\n");
  for(i=0;i<n;i++)
  	 printf("%d\t",*(p+i));
  free(p);
}
