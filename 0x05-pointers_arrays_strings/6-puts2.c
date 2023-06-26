#include "main.h"
/**
 * puts2 - prints every other character of a string
 * starting with the first character
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
int length = 0;
int i = 0;
char *a = str;
int b;

while (*a != '\0')
{
a++;
length++;
}
i = length - 1;
for (b = 0; b <= i; b++)
{
if (b % 2 == 0)
{
_putchar(str[0]);
}
}
_putchar('\n');
}
