#include<stdio.h>
int main()
{
	char op;
    float a,b,result;
    printf("Enter the number a:");
    scanf("%f",& a);
    printf("Enter the number b:");
    scanf("%f",& b);
    
    switch(op)
    {
    	case '+':
    		result=a+b;
    		printf("%f",result);
    		scanf(" %c",& op);
    		break;
    	case '-':
    		result=a-b;
    		printf("%f",result);
    		scanf(" %c",& op);
    		break;
    	case '*':
    		result=a*b;
    		printf("%f",result);
    		scanf(" %c",& op);
    		break;
    	case '/':
    		result=a/b;
    		printf("%f",result);
    		scanf(" %c",& op);
    		break;
    	default:
    		printf("Error");
	}
    return 0;
     
}
