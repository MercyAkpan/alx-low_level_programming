#include  "main.h"
#include <stdlib.h>
/**
  *
  *
  *
  *
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
/*	none = malloc(sizeof(struct dog));
	
	if (none == NULL)
	{
		free (none);
		return (NULL);
	}
	*/
	d->name = name;
	d->age = age;
	d->owner = owner;
	/*return (d);*/
}
