#include <stdio.h>
int main()
{
	int st1[10],st2[10];
	int i=0;
    printf("ENTER YOUR NAME");
    scanf("%s",&st1);
    while (st1[i]!='\0')
    {
    	st2[i]=st1[i];
    	i++;
	}
    printf("%s",&st2);

}

