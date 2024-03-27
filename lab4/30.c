//to read N words and sort them in alphabetical order
#include<stdio.h>
#include<string.h>
int main()
{
	int i,j,n;
	printf("Enter no. of words: ");
	scanf("%d",&n);
	char w[20][100],temp[100];
	printf("Enter the words:\n");
	for(i=0;i<n;i++)
	{
		printf("Word %d: ",i+1);
		scanf("%s",w[i]);
	}
	for(i=0;i<n;i++)
		for(j=i+1;j<n;j++)
			if(strcmp(w[j],w[i])<1)
			{
				strcpy(temp,w[i]);
				strcpy(w[i],w[j]);
				strcpy(w[j],temp);
			}
	for(i=0;i<n;i++)
		printf("%s\n",w[i]);
}
