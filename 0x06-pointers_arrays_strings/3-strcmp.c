#include "main.h"

/**
 * _strcmp - Compares two strings using putchar
 * @s1: First string
 * @s2: Second string
 *
 * Return: 0 if the strings are equal, negative if s1 < s2, positive if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
int i = 0;

while (s1[i] == s2[i])
{
if (s1[i] == '\0')
return (0);
i++;
}
putchar(s1[i]);
putchar(s2[i]);

return (s1[i] - s2[i]);
}
