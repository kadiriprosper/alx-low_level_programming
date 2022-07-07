#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - initializes the variable of type struct dog
 * @d: type struch dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Description: initializes the variables in the struct dog
 */
void print_dog(struct dog *d)
{

if (d != NULL)
{
d->name = ((name == NULL) ? (nil) : name);
d->age = ((age == NULL) ? (nil) : age);
d->owner = ((owner == NULL) ? (nil) : owner);
printf("Name: %s\n", d->name);
printf("Age: %.6f\n", d->age);
printf("Owner: %s", d->owner);
}
else
return;
}
