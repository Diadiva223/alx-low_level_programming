#include <stdio.h>

/**
 * main - Print all possible combinations of two different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0.
 */
int main(void)
{
int digit1, digit2;

for (digit1 = 0; digit1 < 9; digit1++)
{
putchar((digit1 % 10) + '0'); 
}
for (digit2 = digit1 + 1; digit2 < 10; digit2++)
{
putchar((digit2 % 10) + '0');
}

if (digit1 == 8 && digit2 == 9)

putchar('\n');

return (0);
}
