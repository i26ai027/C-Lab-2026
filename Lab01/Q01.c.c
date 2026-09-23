#include <stdio.h>
int main()
{
    float t,p,r,si;
    printf("Enter the priciple amount:");
    scanf("%f",& p);
    printf("Enter the rate:");
    scanf("%f",& r);
    printf("Enter the time:");
    scanf("%f",& t);
    si=p*r*t/100;
    printf("The simple interest is ; %f",si);
    
}