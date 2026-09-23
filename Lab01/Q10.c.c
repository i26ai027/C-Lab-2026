#include <stdio.h>
int main()
{
    float CM,M,P,E,C;
    printf("Enter the marks in Maths:\n");
    scanf("%f",& M);

    printf("Enter the marks in Chemistry:\n");
    scanf("%f",& C);

    printf("Enter the marks in Physics:\n");
    scanf("%f",& P);

    printf("Enter the marks in Entrance examination:\n");
    scanf("%f",& E);
    CM=M/2+P/2+C/2+E;

    printf("Cutt of marks will be; %f \n",CM);

}