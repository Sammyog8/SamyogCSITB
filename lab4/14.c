//to add two matrices
#include<stdio.h>
int main()
{
	int i,j,row,col;
	printf("Enter the order of the two matrix: ");
	scanf("%d%d",&row,&col);
	int a[row][col],b[row][col],sum[row][col];
	printf("Enter items of 1st matrix:\n");
    for (i=0;i<row;i++) 
        for(j=0;j<col;j++) 
		{
            printf("Enter item %dx%d: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    printf("Enter items of 2nd matrix:\n");
    for (i=0;i<row;i++) 
        for(j=0;j<col;j++) 
		{
            printf("Enter item %dx%d: ",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    printf("Sum matrix is: \n");
	for (i=0;i<row;i++) 
    {
		for(j=0;j<col;j++) 
		{
            sum[i][j]=a[i][j]+b[i][j];
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
}
