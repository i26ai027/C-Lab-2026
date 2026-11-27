
#include <stdio.h>

int main()
{
    char str[100], old,n;
    int i;

    printf("Enter a string: ");
    gets(str);

    printf("Enter character to replace: ");
    scanf(" %c", &old);

    printf("Enter new character: ");
    scanf(" %c", &n);

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] == old)
        {
            str[i] = n;
        }
    }

    printf("New string = %s", str);

    return 0;
}
