#include "variadic_functions.h"
#include "stdarg.h"
/**
 *sum_them_all - function
 *@n: the first arguments to add the args to
 *Return: the sum of n + args or 0 if n == to 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	va_list args;
	va_start(args, n);

	if (n == 0)
		return (0);
	while (i < n)
	{
		i++;
	}
	return (i);
}
