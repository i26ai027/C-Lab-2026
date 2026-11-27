#include <stdio.h>
#include<string.h>
int main()
{
	char st1[10],st2[10];
	char str1[100],str2[100];
	printf("Enter the string 1 ");
	scanf("%s",st1);
	printf("Enter the string 2 ");
	scanf("%s",st2);
	int len;
	len=strlen(st1);
	printf("the length will be %d",len);
	//to copy
	strcpy(str1,st1);
	printf("copy %s \n",str1);
	//to concatinate
	strcat(str2,st1);
	strcat(str2,st2);
	printf("concatinate %s \n",str2);
	
	//to compare
	if(strcmp(st1,st2)==0)
	{
		printf("Both are equal");
		
	}
	else
	{
	    printf("Both are not equal");
	}
	
}
