/*Write a program to determine the ranges of char, short,
int, and long variables, both signed and unsigned, by printing appropriate
values from standard headers and by direct computation. Harder if you com-
pute them: determine the ranges of the various floating-point types.
 */

#include <stdio.h>
#include <limits.h>

main()
{
    printf("range of char is min: %d to max: %d\n", CHAR_MIN, CHAR_MAX);
    printf("range of short int is min: %d to max: %d\n", SHRT_MIN, SHRT_MAX);
    printf("range of int is min: %d to max: %d\n", INT_MIN, INT_MAX);
    printf("range of long is min: %ld to max: %ld\n", LONG_MIN, LONG_MAX);
    printf("range of unsigned long is max: %ld\n", ULONG_MAX);
}