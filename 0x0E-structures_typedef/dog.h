#ifndef dog_h
#define dog_h
#include "main.h"
/**
  * struct dog - this is the struct of type "dog"
  * @name: this is the variable
  * @age: this is the 2nd variable
  * @owner: This is the 3rd varible
  * Description: This is the desription.
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
