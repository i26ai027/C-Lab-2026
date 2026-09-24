//factorial 
#include <stdio.h>
int main()
{
	int i,n;
	int fact=1;
	printf("Enter the value:");
	scanf("%d",&n);
	for (i=1;i<=n;i++)
	(fact=fact*i);
	printf("The factorial of number is ;%d",fact);
}
