//multiplication table
#include<stdio.h>
int main()
{
	int i,j,n;
	printf("Enter till what no.? ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=10;j++)
			printf("%d\t",i*j);
		printf("\n");
	}
}
