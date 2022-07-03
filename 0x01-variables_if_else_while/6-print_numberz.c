#include <stdio.h>
/**
* main - Entry point and void
*
* description - Program to print number 0-9
*
* return: return of main set a 0 (sucess)
*
*/
int main(void)
{
int num;
for (num = 0; num < 10 ; num++)
{
putchar((num % 10) + '0');
}
return (0);
}
