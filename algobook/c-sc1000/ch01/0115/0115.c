#include <string.h>
#include <stdio.h>
#include <ctype.h>

/* Palindrome check */
int main()
{
    char s[20] = "Madam I'm Adam";
    char cs[20] = "";
    char *rcs = "";
    int k = 0;
    int i = 0;
    int flag = 0;

    for(i = 0; i < sizeof(s)/sizeof(s[0]); i++)
    {
        // don't about other character beside basic char
        if( (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
        {
            cs[k]=s[i];
            k++;
        }
    }

    if (strcmp(cs, _strrev(cs)) == 0)
        printf("It's a Palindrome\n");
    else
        printf("It's not a Palindrome\n");

    return 0;
}
