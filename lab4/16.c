//to multiply matrices a and b
#include<stdio.h>
int main()
{
	int i,j,k;
	int a[2][3]={1,5,2,3,4,6},b[3][2]={-1,1,2,3,5,2},m[2][2]={0,0,0,0};
	for(i=0;i<2;i++) 
        for(j=0;j<2;j++) 
            for(k=0;k<3;k++) 
                m[i][j]+=a[i][k]*b[k][j];
	printf("Multiplication matrix: \n");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
			printf("%d\t",m[i][j]);
		printf("\n");
	}
}
