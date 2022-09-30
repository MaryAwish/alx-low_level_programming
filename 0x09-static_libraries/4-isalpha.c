#include "main.h"

/**
 * Description: _isalpha - prints uppercase
 *
 * @c: letter tested
 * Return: Always 0
*/

int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
