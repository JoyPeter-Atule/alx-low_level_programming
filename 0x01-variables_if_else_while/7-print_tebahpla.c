#include <stdio.h>
/**
 * main - Entry point and void
 *
 * description - Program to print the alphabet in reverse
 *  return: return of main set a 0 (sucess)
 *
 */
int main(void)
{
char c;
for (c = 'z'; c >= 'a'; c--)
putchar(c);
putchar('\n');
return (0);
}
