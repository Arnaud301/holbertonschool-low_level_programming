#include "dog.h"
#include <stdlib.h>
/**
 *init_dog - function 
 *@d: pointer
 *@name: pointer
 *@age: pointer
 *@owner: pointer
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
