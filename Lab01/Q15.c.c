#include <stdio.h>
int main()
{
    int marks;
    float A,B,C,D,a,b,c,d;
    printf("Enter the marks of 1st student");
    scanf("%f",& a);
    printf("Enter the marks of 2nd student");
    scanf("%f",& b);
    printf("Enter the marks of 3rd student");
    scanf("%f",& c);
    printf("Enter the marks of 4th student");
    scanf("%f",& d);

    if(marks>85)
    {
        printf("GRADE A \n");
    }
    if(70<marks<85)
    {
        printf("GRADE B \n");
    }
    if(55<marks<70)
    {
        printf("GRADE C \n");
    }
    if(40<marks<55)
    {
        printf("GRADE D \n");
    }
    else
    {
        printf("Fail \n");
    }

    
    
    

}