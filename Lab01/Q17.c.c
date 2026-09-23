#include <stdio.h>
int main()
{
    float a,b,c;
    printf("Enter the 1st num");
    scanf("%f",& a);
    printf("Enter the 2nd num");
    scanf("%f",& b);
    printf("Enter the 3rd num");
    scanf("%f",& c);
    
    if (a>b && a>c)
    {
        printf("The max number is %f \n",a);

    }
    else if(b>a && b>c)
    {
        printf("The max number is %f \n",b);
    }
    else
    {
        printf("The max number is %f \n",c);
    }
}

    