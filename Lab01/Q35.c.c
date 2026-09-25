#include <stdio.h>
int main()
{
	int num,sum,q;
	printf("Enter the num");
	scanf("%d",& num);
	while(num!=0)
	{
		q=num%10;
		sum=sum+q;
		num=num/10;
		
	}
	printf("The sum;%d",sum);
	
}
