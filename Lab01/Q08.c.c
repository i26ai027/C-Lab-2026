#include <stdio.h>
int main()
{
    float sec,hr,min,day;
    printf("Enter the seconds",sec);
    scanf("%f", & sec);
    min=sec/60;
    printf("Sec into min=%f \n",min);
   
    hr=sec/3600;
    printf("Sec into hr=%f \n",hr);
   
    day=sec/86400;
    printf("Sec into day=%f \n",day);
    
}