#include <stdio.h>
int fact(int n);
int main()
{
	int n,r,result;
	printf("Enter the value of n and r");
	scanf("%d %d",&n,&r);
	result=fact(n)/(fact(n)*fact(n-r));
	printf("Result %d",result);
	
}
int fact(int n)
{
	int i,f=1;
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	return f;
}
