#include<stdio.h>
#include<stdlib.h>
void main(){
	float mark;
	FILE *p,*temp;
	p= fopen("result.txt","r");
	temp= fopen("temp.txt","w+");
	fscanf(p, "%f", &mark);
	while (!feof(p)) 
	{
		if(mark>=27&&mark<30)
			mark=30;
		fprintf(temp, "%.2f ", mark);
        fscanf(p, "%f", mark);
	}
	printf("sucess");
	fclose(temp);
	fclose(p);
//	remove("result.txt");
//	rename("temp.txt","result.txt");
}
