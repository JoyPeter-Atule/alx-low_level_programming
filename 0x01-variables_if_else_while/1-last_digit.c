#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point with no argument
 *
 * description- assign a random number to n each time it is executed
 *
 * return: 1 if number is positive else 0 (success)
 */
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
}
else if (n < 6 && n != 0)
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
}
else
{
printf("Last digit of %d is %d and 0\n");
}
return (0);
}
