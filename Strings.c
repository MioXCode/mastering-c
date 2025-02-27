#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Function to convert a string to lowercase
void toLower(char *str)
{
    while (*str)
    {
        *str = tolower(*str);
        str++;
    }
}

// Function to convert a string to uppercase
void toUpper(char *str)
{
    while (*str)
    {
        *str = toupper(*str);
        str++;
    }
}

// Function to reverse a string (alternative for non-standard strrev)
void strReverse(char *str)
{
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++)
    {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

// Function to set all characters in a string to a given character
void strSet(char *str, char ch)
{
    while (*str)
    {
        *str = ch;
        str++;
    }
}

// Function to set the first 'n' characters in a string to a given character
void strNSet(char *str, char ch, int n)
{
    for (int i = 0; i < n && str[i] != '\0'; i++)
    {
        str[i] = ch;
    }
}

int main()
{
    char string1[50] = "Tomio";
    char string2[] = "Niam";

    toLower(string1); // Convert string1 to lowercase
    toUpper(string2); // Convert string2 to uppercase

    strcat(string1, string2);     // Append string2 to string1
    strncat(string1, string2, 1); // Append first character of string2 to string1

    strcpy(string1, string2);     // Copy string2 into string1
    strncpy(string1, string2, 1); // Copy first character of string2 into string1
    string1[1] = '\0';            // Ensure null-termination to prevent buffer issues

    strSet(string1, '?');     // Set all characters in string1 to '?'
    strNSet(string1, 'x', 1); // Set the first character of string1 to 'x'
    strReverse(string1);      // Reverse the content of string1

    int length = strlen(string1);            // Calculate length of string1
    int cmp1 = strcmp(string1, string2);     // Compare string1 and string2 (case-sensitive)
    int cmp2 = strncmp(string1, string2, 1); // Compare first character of both strings
    int cmp3 = strcasecmp(string1, string2); // Case-insensitive comparison (POSIX)

    printf("Final Result: %s\n", string1);
    printf("Length: %d\n", length);
    printf("strcmp: %d\n", cmp1);
    printf("strncmp: %d\n", cmp2);
    printf("strcasecmp: %d\n", cmp3);

    return 0;
}
