#include<stdio.h>
int main()
{
	int arr[10],i,search,found=0;
	printf("Enter the elements in array");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the element u want to search");
	scanf("%d",&search);
	
	for (i=0;i<10;i++)
	{
		if(arr[i]==search)
		{
			found=1;
		}
	}
	if (found==1)
	{
		printf("Element found");
	}
	else
	{
		printf("Not found");
	}
}
