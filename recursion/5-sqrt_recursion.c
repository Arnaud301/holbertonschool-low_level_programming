#include "main.h"
/**
 *_sqrt - function
 *@num: int
 *@root: int
 *Return: sqrt
 */
int _sqrt(int num, int root)
{
	if ((root * root) > num)
		return (-1);
	else if ((root * root) == num)
		return (root);
	else
		return (_sqrt(num, root + 1));
}
/**
 *_sqrt_recursion - function
 *@n: int
 *Return: n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (_sqrt(n, 0));
}
