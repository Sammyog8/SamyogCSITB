//to find the sum of rows and column of matrix
#include<stdio.h>
int main()
{
	int i,j,row,col,sumr,sumc;
	printf("Enter order of matrix: ");
	scanf("%d%d",&row,&col);
	int a[row][col];
	printf("Enter items of matrix:\n");
    for (i=0;i<row;i++) 
        for(j=0;j<col;j++) 
		{
            printf("Enter item %dx%d: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    for(i=0;i<row;i++)
    {
    	sumr=0;
    	for(j=0;j<col;j++)
    		sumr+=a[i][j];
    	printf("Sum of row %d = %d\n",i+1,sumr);
	}
	for(j=0;j<col;j++)
    {
    	sumc=0;
    	for(i=0;i<row;i++)
    		sumc+=a[i][j];
    	printf("Sum of column %d = %d\n",j+1,sumc);
	}
}
