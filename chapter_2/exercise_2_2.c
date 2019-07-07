/*
    write a loop equivalent to this for loop without using logical and or or.

    for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    {
        s[i] = c;
    }
 */

#include <stdio.h>

#define MAXLINE 1000

int getUserLine(char s[], int lim);
void copy(char to[], char from[]);

main()
{
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while ((len = getUserLine(line, MAXLINE) > 0))
    {
        printf("made it inside while loop\n");
        if (len > max)
        {
            max = len;
            copy(longest, line);
        }
        printf("value of max is %d\n", max);
        if (max > 0)
        {
            printf("%s", longest);
        }
    }

    return 0;
}

int getUserLine(char s[], int lim)
{
    printf("made it to getUserLine\n");
    int c, i;

    // for (i = 0; i < lim - 1 && (c = getchar()) != EOF && c != '\n'; ++i)
    for (i = 0; i < lim - 1; i++)
    {
        if ((c = getchar()) == EOF)
        {
            break;
        }
        else if (c == '\n')
        {
            break;
        }
        else
        {
            s[i] = c;
        }
    }
    if (c == '\n')
    {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
    {
        ++i;
    }
}
