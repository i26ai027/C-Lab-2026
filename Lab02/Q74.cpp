#include <stdio.h>
int main()
{
	char st1[20],st2[10];
	int i=0,j=0;
    printf("ENTER STRING");
    scanf("%s",&st1);
    printf("ENTER STRING");
    scanf("%s",&st2);
    while (st1[i]!='\0')
    {
    	i++;
    }
    while (st2[j]!='\0')
    {
    	st1[i]=st2[j];
    	i++;
    	j++;
	}
	st1[i]='\0';
	printf("Concatenated string %s",st1);
}
