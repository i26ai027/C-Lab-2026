#include <stdio.h>
int main()
{
	char st1[10],st2[10];
	int i=0;
    printf("ENTER STRING");
    scanf("%s",&st1);
    printf("ENTER STRING");
    scanf("%s",&st2);
    while(st1[i]==st2[i])//it is used to check whether the same char are at same index
	{
    	if(st1[i]=='\0')
    	{
    		printf("Both are equal");
    		return 0;
		}
		else
		{
			i++;
		}
	}
	printf("Both are not equal");
	

}
