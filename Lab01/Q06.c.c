#include <stdio.h>
int main()
{
    float a,b,c;
    printf("The number 1st:");
    scanf("%f",& a);
    printf("The number 2nd:");
    scanf("%f",& b);
    c=a;
    a=b;
    b=c;

    printf("\n after swapping \n");
    printf("a=%f \n",a);
    printf("b=%f \n",b);
}