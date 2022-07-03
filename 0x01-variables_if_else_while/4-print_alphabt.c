#include <stdio.h>
/*
 * main - Entry point and void
 *
 * description - Program to print lowercase of the alphabet except q and e
 *
 * return: return of main set a 0 (sucess)
 */
int main(void)
{
char c;
for (c = 'a'; c <= 'z'; c++)
{
if (c != 'e' && c != 'q')
putchar(c);
}
putchar('\n');
return (0);
}
