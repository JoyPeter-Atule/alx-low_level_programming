#include <stdio.h>
/*
 * main - Entry point and void
 *
 * description - Program to print lower and uppercase of the alphabet
 *
 * return: return of main always 0 (sucess)
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
putchar(c);
}
for (c = 'A'; c <= 'Z'; c++)
{
putchar(c);
putchar('\n');
}
return (0);
}
