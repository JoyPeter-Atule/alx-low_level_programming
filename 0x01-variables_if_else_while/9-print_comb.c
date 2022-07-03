#include <stdio.h>
/**
 *  main - Entry point and void
 *
 *
 * description - Program to print number 0-9
 *
 * return: return of main set a 0 (sucess)
 */
int main(void)
{
int num;
for (num = 0; num <= 9 ; num++)
{putchar((num % 10) + '0');
if (num == 9)
continue;
putchar(',');
putchar('\t');
}
putchar('\n');
return (0);
}
