#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - adds
 * @a: integer 1
 * @b: integer 2
 *
 * Return: successful
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtact
 * @a: ...
 * @b: ...
 * Return: ..
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies
 * @a: ...
 * @b: ...
 * Return: ...
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - division
 * @a: ...
 * @b: ...
 * Return: ...
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - modulous
 * @a: ...
 * @b: ...
 * Return: ...
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
