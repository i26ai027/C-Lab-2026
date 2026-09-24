#include <stdio.h>
int main()
{
	int n,i;
	int odd_sum=0,even_sum=0;
	printf("Enter n:");
	scanf("%d",& n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			even_sum=even_sum+i;
		}
		else
		{
			odd_sum=odd_sum+i;
		}
	}
	printf("Sum of all even sum: %d \n",even_sum);
	printf("Sum of all odd sum: %d \n",odd_sum);
}
