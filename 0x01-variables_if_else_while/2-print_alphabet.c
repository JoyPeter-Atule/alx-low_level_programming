#include <stdio.h>
/*
 * main - Entry point and void
 *
 * description - Program to print lowercase of the alphabet
 *
 * return: return of main set a 0 (sucess)
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
putchar(c);
putchar('\n');
return (0);
}
