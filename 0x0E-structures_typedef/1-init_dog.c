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
	struct dog *none;
	none = d;
/*	none = malloc(sizeof(struct dog));
	
	if (none == NULL)
	{
		free (none);
		return (NULL);
	}
	*/
	d->name = name;
	none->age = age;
	none->owner = owner;
	/*return (d);*/
}
