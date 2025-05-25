#include <stdio.h>
#include <string.h>
#include <ctype.h>

int Palindrome(char str[])
{
    char catstr[500];
    int i, j = 0;
    for (i = 0; str[i] != '\0'; i++)
    {
        if (isalpha(str[i]))
        {
            catstr[j++] = tolower(str[i]);
        }
    }
    catstr[j] = '\0'; 

    // Check for palindrome
    for (i = 0; i < j / 2; i++)
    {
        if (catstr[i] != catstr[j - i - 1])
        {
            return 0;  // Not a palindrome
        }
    }
    return 1;  // Is a palindrome
}

int main()
{
    int n, i;
    char string[150], temp[500] = "";  // initialize temp as empty string

    printf("Enter the number of strings: ");
    scanf("%d", &n);
    getchar();  

    for (i = 0; i < n; i++)
    {
        printf("Enter string %d: ", i + 1);
        fgets(string, sizeof(string), stdin);
        string[strcspn(string, "\n")] = '\0'; 
        strcat(temp, string);  
    }

    printf("\nConcatenated string is: %s\n", temp);

    if (Palindrome(temp))
    {
        printf("\n'%s' is a Palindrome\n", temp);
    }
    else
    {
        printf("\n'%s' is not a Palindrome\n", temp);
    }

    return 0;
}
