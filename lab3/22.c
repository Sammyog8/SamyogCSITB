//chess
#include<stdio.h>
int main()
{
	int i,j,b=255,w=219;
	for(i=1;i<=8;i++)
	{
		for(j=1;j<=8;j++)
		{
			if((i+j)%2==0)
				printf("%c%c",w,w);
			else
				printf("%c%c",b,b);
		}
		printf("\n");
	}
}
