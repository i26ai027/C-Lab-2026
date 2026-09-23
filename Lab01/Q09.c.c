#include <stdio.h>
int main()
{
    float hr,min,sec,day;
    printf("Enter the number of sec:");
    scanf("%f", & sec);
    sec=60*min;
    printf("min into sec;%f \n",min);
    
    hr=3600*sec; 
    printf("hr into sec;%f \n",hr);
    
    day=86400*sec;
    printf("day into sec;%f \n" ,day);
   
   

}
