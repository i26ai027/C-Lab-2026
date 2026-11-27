#include <stdio.h>
int main()
{
	int arr1[3][3],arr2[3][3],i,j;
	int mul[3][3];
	printf("Enter the number of elements");
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
		printf("%d \t",arr1[i][j]);
		}
		printf("\n");
	}
	
	printf("\n Enter the value for 2nd matrix\n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			scanf("%d",&arr2[i][j]);
		}
	}
	
	
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("%d \t",arr2[i][j]);
		}
		printf("\n");
	}
	
	
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			mul[i][j]=arr1[i][j]*arr2[i][j];
		}
	}
	
	printf("The multiplication of both arrays are:\n");
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("%d\t",mul[i][j]);
		}
		printf("\n");
	}
}
