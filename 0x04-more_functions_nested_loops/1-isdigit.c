#include "main.h"
/**
 * _isdigit - Checks for a digit
 * @x: The number to be checked
 * Return: 1 for a digit or 0 otherwise
 */
int _isdigit(int x)
{
if (x >= 48 && x <= 57)
{
return (1);
}
return (0);
}
