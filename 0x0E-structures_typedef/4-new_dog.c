#include "dog.h"
#include <string.h>

/**
  * Author: Okoye Chijioke Henry
  * Program: WinMingle Community C Training.
  * 
  */


dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *d;
    char *n, *o;

    if (!name || !owner)
        return NULL;

    d = malloc(sizeof(dog_t));
    if (!d)
        return NULL;

    n = malloc(strlen(name) + 1);
    o = malloc(strlen(owner) + 1);
    if (!n || !o)
    {
        free(n);
        free(o);
        free(d);
        return NULL;
    }

    strcpy(n, name);
    strcpy(o, owner);

    d->name = n;
    d->age = age;
    d->owner = o;

    return d;
}

