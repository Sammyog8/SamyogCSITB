//
#include<stdio.h>
int main()
{
	int i,j,sum=0,n,power;
	printf("Till what no? ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		power=1;
		for(j=1;j<=i;j++)
			power=power*i;
		sum+=power;
	}
	printf("Sum = %d",sum);
}
