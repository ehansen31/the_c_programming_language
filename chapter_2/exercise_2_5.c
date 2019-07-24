/*
Write the function any (s1, s2 ), which returns the first location
in the string s1 where any character from the string s2 occurs, or -1 if s1 contains no characters from s2. (The standard library function strpbrk does the same job but returns a pointer to the location.
 */

#include <stdio.h>

int main(int argc, char const *argv[])
{
    char *value = "this is the input statment";
    char *checked = "words here shouldn't be in the string above";

    int result = any(value, checked);

    printf("string \"%s\" which shouldn't contain \"%s\" is: %d\n", value, checked, result);

    return 0;
}

int any(char s1[], char s2[])
{
    for (int i = 0; s1[i] != '\0'; i++)
    {
        for (int j = 0; s1[j] != '\0'; j++)
        {
            if (s1[i] == s2[j])
            {
                return i;
            }
        }
    }
    return (-1);
}