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
	d = malloc(sizeof(dog));
	if (d == NULL)
	{
		free (d);
		return (NULL);
	}
	d -> name = name;
	d -> age = age;
	d -> owner = owner;
	/*return (d);*/
}
