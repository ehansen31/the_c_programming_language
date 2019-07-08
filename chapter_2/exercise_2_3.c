/*
Write the function htoi (s ), which converts a string of hexa-decimal digits (including an optional Ox or ox) into its equivalent integer value.
The allowable digits are 0 through 9, a through f, and A through F.
 */

#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
    printf("value for string: \"0X0C0BE\" is: %d\n", htoi("0X0C0BE"));

    return 0;
}

int hex_char_to_int(char c)
{
    char *hex_values = "abcdef";
    char *upper_hex_values = "ABCDEF";

    if (c >= '0' && c <= '9')
    {
        return c - '0';
    }
    else
    {
        for (int i = 0; hex_values[i] != '\0' && upper_hex_values[i] != '\0'; i++)
        {
            if (c == hex_values[i] || c == upper_hex_values[i])
            {
                return 10 + i;
            }
        }
    }
    return 0;
}

int htoi(char s[])
{
    int result = 0;

    for (int i = 0; s[i] != '\0'; i++)
    {
        result = result * 16;
        if (i == 0 && s[i] == '0')
        {
            i++;
            if (i == 1 && (s[i] == 'x' || s[i] == 'X'))
            {
                i++;
            }
        }

        result += hex_char_to_int(s[i]);
    }
    return result;
}