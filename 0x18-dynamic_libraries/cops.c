#include <stdio.h>
#include "maths.h"

/**
 * add - addition
 * @a: int 1
 * @b: int 2
 * Return: sum
 */

int add(int a, int b)
{
	int sum = a + b;

	return (sum);
}

/**
 * sub - subtraction
 * @a: int 1
 * @b: int 2 
 * Return:  sub
 */
int sub(int a, int b)
{
	int subt  = a  - b;
	
	return (subt);
}

/**
 * mul - multiply
 * @a: int 1
 * @b: int 2  
 * Return: mul
 */
int mul(int a, int b)
{
	int mult = a * b;

	return (mult);
}

/**
 * div - division
 * @a: int 1
 * @b: int 2 
 * Return: div
 */
int div(int a, int b)
{
	int divi = a / b;

	return (divi);
}

/**
 * mod - modulus
 * @a: int 1
 * @b: int 2 
 * Return: mod
 */
 int mod(int a, int b)
{
	int modu = a % b;

	return (modu);
}
