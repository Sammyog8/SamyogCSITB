//count no. of vowels,consonents,digits,spaces and other
#include<stdio.h>
void count(char *);
int main()
{
	char s[80];
	printf("Enter a string: ");
	gets(s);
	char *p=s;
	count(&s[80]);
}
void count(char *p)
{
//	char s=*p;
	int i;
	int vo=0,co=0,di=0,sp=0,ot=0;
	for(i=0;p[i]!='\0';i++)
	{
		if(p[i]>='a'&&p[i]<='z'||p[i]>='A'&&p[i]<='Z')
		{
			if(p[i]=='a'||p[i]=='e'||p[i]=='i'||p[i]=='o'||p[i]=='u'||p[i]=='A'||p[i]=='E'||p[i]=='I'||p[i]=='O'||p[i]=='U')
				vo++;
			else
				co++;
		}
		else if(p[i]>='0'&&p[i]<='9')
			di++;
		else if(p[i]==' ')
			sp++;
		else
			ot++;
	}
	printf("Vowels=%d\n Consonents=%d\n Digits=%d\n Spaces=%d\n Others=%d",vo,co,di,sp,ot);
}
