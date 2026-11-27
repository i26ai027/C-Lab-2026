#include <stdio.h>
int fibonacci(int n)
{
	int a=0,b=1,c,i;
	printf("First %d num:",n);
	for (i=1;i<=n;i++)
	{
		printf("%d",a);
		c=a+b;
		a=b;
		b=c;
	}
	printf("\n");
}

int main()
{
	fibonacci(5);
	fibonacci(10);
	
	return 0;
}
