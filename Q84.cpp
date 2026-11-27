#include <stdio.h>
#include <string.h>
int main()
{
	char st[10],rst[10];
	int i=0,j=0;
    printf("ENTER STRING");
    scanf("%s",&st);
    while(st[i]!='\0')
    {
    	i++;
	}
	printf("len %d \n",i);
	i=i-1;
	while(i>=0)
	{
		rst[j]=st[i];
		j++;
		i--;
	
	}
	rst[j]='\0';
	printf("reverse string %s",rst);
	if (strcmp(st,rst)==0)
	{
		printf("\n Palindrome \n");
		return 0;
	}
	else
	{
		printf("Not");
	}
	puts(strrev(st));
	
}
