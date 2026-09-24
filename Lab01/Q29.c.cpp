#include <stdio.h>
int main()
{
	int q,sum=0,num,tamp=0;
	printf("Enter number");
	scanf("%d",& num);
	tamp=num;
	while(num!=0)
	{
		q=num%10;
		sum=sum*10+q;
		num=num/10;
	}
	if (tamp==sum)
	{
		printf("Num is palindrome %d",tamp);
	}
	else
	{
		printf("Num is not palindrome %d",tamp);
	}
}
