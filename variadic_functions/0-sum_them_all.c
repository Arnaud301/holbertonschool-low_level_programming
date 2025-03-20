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
	int sum = 0;
	va_list args;

	if (n == 0)
		return (0);
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}
