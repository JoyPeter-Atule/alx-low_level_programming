#include <stdio.h>
/**
 *main - Entry point and void
 *
 * description - Program to print numbers of base 16 in lowercas
 *
 * return: return of main set a 0 (sucess)
 */
int main(void)
{
char c;
int num;
for (num = 0; num <= 10; num++)
putchar((num % 10) + '0');
for (c = 'a'; c <= 'f'; c++)
putchar(c);
putchar('\n');
return (0);
}
