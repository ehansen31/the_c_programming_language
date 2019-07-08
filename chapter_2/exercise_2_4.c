/*
Write an alternate version of squeeze (s1, s2) that deletes
each character in s1 that matches any character in the string s2.
 */

#include <stdio.h>
char result[1000];
int main(int argc, char const *argv[])
{
    char* message = "hello world";
    char * exclude = "aeiou";
    squeeze2(message, exclude);
    // squeeze("hello world", "aeiou");
        /* code */
        printf("string \"hello world\" excluding \"aeiou\" is: %s", message);
    return 0;
}

void squeeze(char s1[], char s2[])
{
    int result_radix = 0;

    for (int i = 0; s1[i] != '\0'; i++)
    {
        for (int j = 0; s2[j] != '\0'; j++)
        {
            if (s1[j] == s2[j])
            {
                break;
            }
            if (s2[j + 1] == '\0')
            {
                result[result_radix++] = s1[i];
            }
        }
    }
    return;
}

void
squeeze2(char s[], char t[]) {
    int i, j, k;
    for (k = 0; t[k] != '\0'; k++) {
        for (i = j = 0; s[i] != '\0'; i++)
            if (s[i] != t[k])
                s[j++] = s[i];
        s[j] = '\0';
    }
}