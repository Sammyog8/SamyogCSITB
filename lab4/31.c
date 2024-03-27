//to sort {aman, akesh, anish, anam, anil, anju} in alphabetical order
#include<stdio.h>
#include<string.h>
int main()
{
	int i,j;
	char w[][20]={"aman", "akesh", "anish", "anam", "anil", "anju"},temp[100];
	for(i=0;i<6;i++)
		for(j=i+1;j<6;j++)
			if(strcmp(w[j],w[i])<1)
			{
				strcpy(temp,w[i]);
				strcpy(w[i],w[j]);
				strcpy(w[j],temp);
			}
	for(i=0;i<6;i++)
		printf("%s\n",w[i]);
}
