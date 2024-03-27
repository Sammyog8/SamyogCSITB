#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
    FILE *f1, *f2;
    char read[100];
    f1 = fopen("sample.txt", "r");
    f2 = fopen("copy.txt", "w+");
    fscanf(f1, "%s", read);
	while (!feof(f1)) 
	{    
        if (strcmp(read, "Shiv") == 0) 
            strcpy(read, "Vola");
        if (strcmp(read, "Krishna") == 0)
            strcpy(read, "Shyam");
        fprintf(f2, "%s ", read);
        fscanf(f1, "%s", read);
    }
	fclose(f1);
	fclose(f2);
}
