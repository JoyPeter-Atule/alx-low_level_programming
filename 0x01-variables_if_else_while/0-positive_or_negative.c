#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * description - Program to tell if a number is positive, zero or negative
 * main - Entry point
 * return: Always 0( success)
 */
int main(void)
{	
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if (n > 0)
{ 
printf("%d is positive\n", n);
} 
else if (n == 0)
{	
printf("%d is zero\n", n);
}  
else if (n < 0)
{  
printf("%d is negative\n", n);
}
else
{		
printf("n is not a number\n");	 
}	
return (0);
}
