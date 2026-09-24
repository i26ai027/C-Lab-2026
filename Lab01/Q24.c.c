#include <stdio.h>
int main()
{
	int x,n,i;
	int power = 1;
	float y;
	printf("Enter x and n");
	scanf("%d %d",&x,&n);
	if (n==1)
	{
		y=1+x;
	}
	else if (n==2)
	{
		y=1+x/n;
	}
	else if (n==3)
	{
		for(i=1;i<=n;i++)
		power=power*x;
		y=1+power;
	}
	else
	{
		y=1+n*x;
	}
	printf("%f",y);
}
