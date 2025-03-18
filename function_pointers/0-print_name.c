#include "function_pointers.h"
/**
 *print_name - function
 *@f: function pointer
 *@name: the name u got to print
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
