//find max using conditional operators
#include <stdio.h>
int main()
{
    int a,b;
    float max;
    printf("Enter number 1");
    scanf("%d",& a);
    printf("Enter number 2");
    scanf("%d",& b);
    max=(a>b)? a:b;
    printf("The max numbers is %f \n",max);

}