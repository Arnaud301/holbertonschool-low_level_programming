#include "main.h"
/**
 *is_prime_number
 *@n: int
 *Return: check prie
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime_checkeur(n, 2));
}
/**
 *prime_checkeur - function
 *@n: int
 *@i: int
 *Return: prime number
 */
int prime_checkeur(int n,int i)
{
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (prime_checkeur(n, i + 1));
}
