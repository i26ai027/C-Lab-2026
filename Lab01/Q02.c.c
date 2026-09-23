#include <stdio.h>
int main()
{
    float a,b,c,d,e,sum;
    printf("Enter the marks of 1st student");
    scanf("%f", & a);
    printf("Enter the marks of 2nd student");
    scanf("%f", & b);
    printf("Enter the marks of 3rd student");
    scanf("%f", & c);
    printf("Enter the marks of 4th student");
    scanf("%f", & d);
    printf("Enter the marks of 5th student");
    scanf("%f", & e);
    sum=a+b+c+d+e;
    printf("The sum of marks of students is ;%f",sum);
}