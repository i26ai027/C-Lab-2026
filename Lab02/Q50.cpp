#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	int num[6],tamp,i,j;
	printf("Enter the array elements");
	for (int i=0;i<6;i++)
	{
		scanf("%d",& num[i]);
	}
	printf("Array elements");
	for (int i=0;i<6;i++)
	{
		printf("%d",num[i]);
	}
		for (i=0;i<6;i++)
	{
		for (j=0;j<6-i;j++)
		{
			if(num[j]>num[j+1])
			{
				tamp=num[j];
				num[j]=num[j+1];
				num[j+1]=tamp;
			}
			for(int i=0;i<6;i++)
			{
			printf("%d",num[i]);	
			}
		}
		printf("\n       \n");
	}
	
		
}

