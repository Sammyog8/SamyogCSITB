//to add two matrices using DMA and function.
#include <stdio.h>
#include <stdlib.h>
void add(int *, int *, int *, int , int);
int main() 
{
    int r, c,i,j;
    printf("Enter order of matrix: ");
    scanf("%d%d",&r,&c);
    int *a = (int *)calloc(c , sizeof(int));
    int *b = (int *)calloc(c , sizeof(int));
    int *s = (int *)calloc(c , sizeof(int));
    printf("Enter elements of matrix 1:\n");
    for (i = 0; i < r; i++) 
        for (j = 0; j < c; j++) 
            scanf("%d", (a + i * c + j));
    printf("Enter elements of matrix 2:\n");
    for (i = 0; i < r; i++) 
        for (j = 0; j < c; j++) 
            scanf("%d", (b + i * c + j));
    add(a, b, s, r, c);
    printf("Sum of matrices:\n");
    for ( i = 0; i < r; i++) 
	{
        for ( j = 0; j < c; j++)
            printf("%d\t", *(s + i * c + j));
        printf("\n");
    }
    free(a);
    free(b);
    free(s);
}
void add(int *a, int *b, int *s, int r, int c) 
{
	int i,j;
    for (i = 0; i < r; i++) 
        for (j = 0; j < c; j++) 
            *(s + i * c + j) = *(a + i * c + j) + *(b + i * c + j);
}
