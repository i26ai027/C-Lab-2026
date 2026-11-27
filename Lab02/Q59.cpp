#include <stdio.h>
int main()
{
	int a[9],i,search,count=0;
	printf("Enter the array elements");
	for(int i=0;i<9;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter the element to search");
	scanf("%d",&search);
	for(int i=0;i<9;i++)
	{
		if(a[i]==search)
		{
			count++;
		}
	}
	printf("The %d is occured %d time",search,count);
}
