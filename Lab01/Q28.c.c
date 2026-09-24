#include <stdio.h>
int main()
{
	int q,sum=0,num,tamp=0;
	printf("Enter number");
	scanf("%d",num);
	tamp=num;
	while(num!=0)
	{
		q=num%10;
		sum=sum+q*q*q;
		num=num/10;
	}
	
	if (tamp==sum)
	{
		printf("ARMSTRONG");
		scanf("%d",tamp);
		
	}
	else
	{
		printf("Not Armstrong; %d");
		scanf("%d",tamp);
	}
	printf("%d",sum);
}
