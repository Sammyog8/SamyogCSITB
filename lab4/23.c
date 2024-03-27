//to concatenate string
#include<stdio.h>
int main()
{
	char s1[80],s2[80];
	int i,l=0,m=0;
	printf("Enter words to concatenate: ");
	scanf("%s%s",s1,s2);
	while(s1[l]!='\0')
		l++;
	while(s2[m]!='\0')
		m++;
	for(i=0;i<m;i++)
		s1[l+i]=s2[i];
	printf("%s",s1);
}
