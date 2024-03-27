//to read roll, name, markc_in_C and marks_in_IIT of N students and then find average marks
#include <stdio.h>
#include <stdlib.h>
struct student{
  int roll;
  char name[30];
  int c;
  int iit;
  float avg;
};
int main() {
  struct student *s;
  int i,n;
  float total;
  printf("Enter number of students: ");
  scanf("%d", &n);
  s = (struct student *)malloc(n * sizeof(struct student));
  for (i = 0; i < n; i++) 
  {
    printf("Enter roll, name and marks in c and iit:\n");
    scanf("%d%s%d%d", &(s + i)->roll, (s + i)->name, &(s + i)->c, &(s + i)->iit);
    total=((s+i)->c + (s+i)->iit);
	(s+i)->avg=total/2;
  }
  for (i = 0; i < n; i++) {
    printf("%d\t%s\t%d\t%d\t%.2f\n", (s + i)->roll, (s + i)->name, (s + i)->c, (s + i)->iit, (s + i)->avg);
  }
  free(s);
}
