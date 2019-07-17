/*
Write an alternate version of squeeze (s1, s2) that deletes
each character in s1 that matches any character in the string s2.
 */

#include <stdio.h>
char result[1000];
int main(int argc, char const *argv[])
{
    char *message = "hello world";
    char *exclude = "aeiou";

    squeeze("hello world", "aeiou");

    printf("string \"hello world\" excluding \"aeiou\" is: %s\n", result);

    return 0;
}

void squeeze(char s1[], char s2[])
{
    int result_radix = 0;

    for (int i = 0; s1[i] != '\0'; i++)
    {
        for (int j = 0; s2[j] != '\0'; j++)
        {
            if (s1[i] == s2[j])
            {
                // printf("s1[%d]:%c is equal to s2[%d]:%c\n", i, s1[i], j, s2[j]);
                break;
            }
            if (s2[j + 1] == '\0')
            {
                // printf("%c appeneded to result array\n", s1[i]);
                result[result_radix++] = s1[i];
            }
        }
    }
    return;
}