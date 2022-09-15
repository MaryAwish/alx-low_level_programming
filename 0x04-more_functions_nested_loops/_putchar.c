#include <unistd.h>

/**
 * _putchar - writes the character to c stdout
 * @c: the character to print
 * Return: 1 on success
 * On error, -1 is returned, and err no is set appropriately
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
