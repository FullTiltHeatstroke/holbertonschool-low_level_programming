#include "dog.h"
#include <stdio.h>
/**
 * init_dog - initalize
 * @d: pointer to struct dog
 * @name: pointer to name of the string
 * @age: age of dog
 * @owner: pointer to owner string
 *
 * initilizes members of struct dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d == NULL)
return;
d->name = name;
d->age = age;
d->owner = owner;
}
