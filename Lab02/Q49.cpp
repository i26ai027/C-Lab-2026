#include <stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int num[6],i,j,tamp,n;
	printf("Enter the number of elements");
	scanf("%d",&n);
	printf("Enter the elements");
	for (i=0;i<6;i++)
	{
		scanf("%d",num[i]);
	}
	
	for (i=0;i<6;i++)
	{
		for(j=0;j<6-i-1;j++)
		{
			if (num[j]>num[j+1])
			{
				tamp=num[j];
				num[j]=num[j+1];
				num[j+1]=tamp;
				
			}
			for (int i=0;i<6;i++)
			{
				printf("%d",num[i]);
			}
		}
	}
	
}
	
	
