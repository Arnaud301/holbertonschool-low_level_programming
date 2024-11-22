#include "variadic_functions.h"

/**
 *sum_them_all - function
 *@n: idk
 *Return: return
 */

int sum_them_all(const unsigned int n, ...)
{
	int a = 0;
	unsigned int i;
	va_list args;

	if (n == 0)
		return (0);
			
	va_start(args, n);

	for (i = 0; i < n; i++)
		a += va_arg(args, int);

	va_end(args);

	return (a);
}
