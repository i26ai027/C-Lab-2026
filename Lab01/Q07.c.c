#include <stdio.h>
int main()
{
    float h,b,area;
    printf("The height of the triangle:");
    scanf("%f", & h);
    printf("The breadth of the triangle:");
    scanf("%f", & b);
    area=0.5*h*b;
    printf("The area of the triangle ; %f \n",area);
}