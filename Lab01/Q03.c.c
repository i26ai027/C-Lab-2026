#include <stdio.h>
int main()
{
    float a,b,c,per,sum;
    printf("Enter the marks of 1st student");
    scanf("%f", & a);    

    printf("Enter the marks of 2nd student");
    scanf("%f", & b);
    printf("Enter the marks of 3rd student");
    scanf("%f", & c);
    sum=a+b+c;
    per=(a+b+c/3)*100;
    printf("The sum of marks of students is ;%f",sum);
}