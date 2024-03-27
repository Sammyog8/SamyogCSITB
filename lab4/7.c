//to search an item in array using binary search
#include <stdio.h>
int main() 
{
    int n,num,i,temp,j,left,right,mid;
    printf("Enter no. of elements: ");
    scanf("%d", &n);
    int a[n];
    for (i=0;i<n;i++) 
	{
        printf("No. %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    for(j=0;j<n;j++)
    	for(i=0;i<n-j;i++)
    		if(a[i]>a[i+1])
    		{
    			temp=a[i];
    			a[i]=a[i+1];
    			a[i+1]=temp;
			}
	for(j=0;j<n;j++)
		printf("%d ",a[j]);
    printf("\nEnter the number to search: ");
    scanf("%d", &num);
    left=0;            //binary search start
    right=n-1;
    while(left<=right) 
	{
        mid=left+(right-left)/2;
        if (a[mid]==num)
        {
            printf("The number %d is found at index %d.", num, mid);
            return 0;
		}
        else if (a[mid]<num)
            left=mid+1;
        else
            right=mid-1;
    }
    printf("The number %d is not found in the array.", num);
}
