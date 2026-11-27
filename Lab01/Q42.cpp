//Prime numbers
#include<stdio.h>
int main()
{
	int num,b,flag=0;
	printf("Enter num");
	scanf("%d",&num);
	for (b=2;b<num;b++)
	{
		if (num%b==0)
		{
			flag=1;
		}
		if (flag==0)
		{
			printf("prime:");
		}
		else
		{
			printf("No prime");
		}
	}
}
