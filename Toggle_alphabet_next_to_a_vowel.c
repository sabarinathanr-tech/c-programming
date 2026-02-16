#include <stdio.h>
#include <ctype.h>

/*
    Program: Toggle case of character next to every vowel
    Example:
    Input  : Sabari
    Output : SaBaRi
*/

int main()
{
    char str[1000];
    int i;

    printf("Enter a string: ");
    scanf("%999s", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        char current = tolower(str[i]);

        // Check if current character is a vowel
        if (current == 'a' || current == 'e' || 
            current == 'i' || current == 'o' || 
            current == 'u')
        {
            if (str[i + 1] != '\0')
            {
                if (islower(str[i + 1]))
                    str[i + 1] = toupper(str[i + 1]);
                else if (isupper(str[i + 1]))
                    str[i + 1] = tolower(str[i + 1]);
            }
        }
    }

    printf("Output: %s\n", str);

    return 0;
}
