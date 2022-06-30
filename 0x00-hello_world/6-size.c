#include <stdio.h>
/**
 * main - Entry point
 *
 * return:always zero (success)
 */
int main(void)
{
int i;
char c;
float d;
long int I;
long long int II;
   printf(“Size of a char: %lu bytes(s)\n”,sizeof(c));

   printf(“Size of an int: %lu bytes(s)\n”,sizeof(i));

   printf(“Size of a long int: %lu bytes(s)\n”,sizeof(I));

   printf(“Size of a long long int: %lu bytes(s)\n”,sizeof(II));

   printf(“Size of a float: %lu bytes(s)\n”,sizeof(d));

   return (0);

}
