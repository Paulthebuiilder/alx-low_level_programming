#include "main.h"

/**
* _puts - This function prints a string, followed by a line, to stdout.
*
* @str: string to print
*/

void _puts(char *str)
{
while (*str != '\0')
{
_putchar(*str++);
}
_putchar('\n');
}
