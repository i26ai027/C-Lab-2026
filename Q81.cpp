#include <stdio.h>

int main()
{
    char str[200];
    int i;
    int lower = 0, upper = 0, digit = 0, special = 0;

    printf("Enter a line: ");
    gets(str);//TO READ THE WORDS EVEN AFTER SPACE

    for(i = 0; str[i] != '\0'; i++)
    {
        if(str[i] >= 'a' && str[i] <= 'z')
        {
            lower++;
        }
        else if(str[i] >= 'A' && str[i] <= 'Z')
        {
            upper++;
        }
        else if(str[i] >= '0' && str[i] <= '9')
        {
            digit++;
        }
        else if(str[i] != ' ')
        {
            special++;
        }
    }

    printf("Lowercase = %d\n", lower);
    printf("Uppercase = %d\n", upper);
    printf("Digits = %d\n", digit);
    printf("Special symbols = %d\n", special);

    return 0;
}
