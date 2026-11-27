#include <stdio.h>
int main()
{
	int arr1[3][3],arr2[3][3],i,j;
	int sum[3][3];
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
			sum[i][j]=arr1[i][j]+arr2[i][j];
		}
	}
	
	printf("The sum of both arrays are:\n9");
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf("%d\t",sum[i][j]);
		}
		printf("\n");
	}
}
