#include "main.h"

/**
 * _strncpy - Copies a string using putchar
 * @dest: Destination buffer
 * @src: Source string
 * @n: Maximum number of characters to copy
 *
 * Return: Pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
		putchar(dest[i]);
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
		putchar(dest[i]);
	}

	return (dest);
}
