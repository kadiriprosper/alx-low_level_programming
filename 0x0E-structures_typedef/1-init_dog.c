#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initializes the variable of type struct dog
 * @d: type struch dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Description: initializes the variables in the struct dog
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{

if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
else
return;
}
