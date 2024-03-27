//to find sum of diagonal elements of sq matrix
#include<stdio.h>
int main()
{
	int i,j,s,sum=0;
	printf("Enter size of matrix: ");
	scanf("%d",&s);
	int a[s][s];
	printf("Enter items of matrix:\n");
    for(i=0;i<s;i++) 
        for(j=0;j<s;j++) 
		{
            printf("%dx%d: ",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    for(i=0;i<s;i++) 
        sum+=a[i][i];
    printf("Sum = %d",sum);
}
