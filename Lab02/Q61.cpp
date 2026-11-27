#include <stdio.h>
int palindrome(int num);
int main()
{
	int num,q,tamp,sum=0;
	printf("Enter the number");
	scanf("%d",&num);
	
	if (palindrome(num))
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not Palindrome");
	}
	return 0;
}
	int palindrome(int num)
    {
    	int q;
    	int sum=0;
    	int tamp=num;
    	while(num!=0)
    	{
    		q=num%10;
    		sum=sum*10+q;
    		num=num/10;
		}
		if (tamp==sum)
		{
			return 1;
		}
		else
		{
			return 0;
		}
    }

