//count no. of prime betn 1 and n
#include<stdio.h>
int main()
{
	int n,i,j,f,count=0;
	printf("Enter till what no.: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=0;
		for(j=1;j<=i;j++)
		{
			if(i%j==0)
				f++;
		}
		if(f==2)
			count++;
	}
	printf("The no. of prime between 1 and %d is %d",n,count);
}
