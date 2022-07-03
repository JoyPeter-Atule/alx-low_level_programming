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
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
for (letter = 'A'; letter <= 'Z'; letter++)
{
putchar(letter);
}
return (0);
}
