//pattern
#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=0;i<5;i++)
	{
		for (k=0;k<2*(5-i)-1;k++)
			printf(" ");
		for (j=0;j<2*i+1;j++)
			printf("%d ",j+1);
		printf("\n");
	}
}
