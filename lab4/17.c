//to multiply two matrices by asking size
#include<stdio.h>
int main()
{
	int i,j,k,ar,ac,br,bc;
	printf("Enter order of matrix a: ");
	scanf("%d%d",&ar,&ac);
	printf("Enter order of matrix b: ");
	scanf("%d%d",&br,&bc);
	if(ac!=br)
		printf("No multiplication");
	else
	{
		int a[ar][ac],b[br][bc],m[ar][bc];
		printf("Enter elements of %dx%d matrix:\n",ar,ac);
		for(i=0;i<ar;i++)
			for(j=0;j<ac;j++)
			{
				printf("%dx%d: ",i+1,j+1);
				scanf("%d",&a[i][j]);
			}
		printf("Enter elements of %dx%d matrix:\n",br,bc);
		for(i=0;i<br;i++)
			for(j=0;j<bc;j++)
			{
				printf("%dx%d: ",i+1,j+1);
				scanf("%d",&b[i][j]);
			}
		for(i=0;i<ar;i++) 
	        for(j=0;j<bc;j++) 
	        {
	        	m[i][j]=0;
	            for(k=0;k<ac;k++) 
	                m[i][j]+=a[i][k]*b[k][j];
			}
		printf("Multiplication matrix: \n");
		for(i=0;i<ar;i++)
		{
			for(j=0;j<bc;j++)
				printf("%d\t",m[i][j]);
			printf("\n");
		}
	}
}
