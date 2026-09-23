#include <stdio.h>
int main()
{
    float sec,time,hr,min;
    printf("Enter the number of sec:");
    scanf("%f",& sec);

    min=sec/60;
    printf("The sec in min: %f\n",min);

    hr=sec/3600;
    printf("The sec in hr: %f\n", hr);

    time=hr,min;
    printf("The time will be : %f \n", time);
}