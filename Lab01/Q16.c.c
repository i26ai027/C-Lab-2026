#include <stdio.h>
int main()
{
    float num1,num2,num3;
    printf("Enter the 1st num");
    scanf("%f",& num1);
    printf("Enter the 2nd num");
    scanf("%f",& num2);
    printf("Enter the 3rd num");
    scanf("%f",& num3);
    
    
    if(num1>num2>num3)
    {
        printf("The num1 is max among three");
        
    }
    else if(num2>num1>num3)
    {
        printf("The num2 is max among three");
        
    }
    else
    {
        printf("The num3 is max among three");
        
    }

}