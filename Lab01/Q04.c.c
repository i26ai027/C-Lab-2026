#include <stdio.h>
int main()
{
    float a,b,c,d,gross;
    printf("Enter the total salary:");
    scanf("%f", & a);
    printf("Enter the bonus:");
    scanf("%f", & b);
    printf("Enter the taxes added:");
    scanf("%f", & c);
    printf("Enter the other allowances");
    scanf("%f", & d);
    gross=a+b+c+d;
    printf("The gross salary is %f:",gross);
}