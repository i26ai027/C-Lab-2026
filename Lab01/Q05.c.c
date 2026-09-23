#include <stdio.h>
int main()
{
    float fah,cel;
    printf("The temp in fah:");
    scanf("%f",& fah);
    cel=(fah-32)*0.55;
    printf("The temp in fahhrenheit ; %f",cel);
}
