#include <stdio.h>

/**
 *print_name - prints
 *@name: name of the person
 *@f: function pointer
 *Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}

	f(name);

}