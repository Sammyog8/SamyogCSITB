//to find transpose
#include<stdio.h>
int main()
{
	int i,j,r,c;
	printf("Enter order of matrix: ");
	scanf("%d%d",&r,&c);
	int a[r][c];
	printf("Enter items of matrix:\n");
    for(i=0;i<r;i++) 
        for(j=0;j<c;j++) 
		{
            printf("%dx%d: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    for(i=0;i<c;i++)
    {
    	for(j=0;j<r;j++)
    	    printf("%d\t",a[j][i]);
    	printf("\n");
	}
}
