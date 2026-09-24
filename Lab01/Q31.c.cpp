#include <stdio.h>
int main()
{
	int q,sum=0,num;
	printf("Enter number");
	scanf("%d",&num);
	while(num!=0)
	{
		q=num%10;
		sum=sum+q;
		num=num/10;
		
	}
	printf("%d",sum);
	
	
}
