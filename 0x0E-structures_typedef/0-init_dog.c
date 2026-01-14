#include "dog.h"

/**
  * Author: Okoye Chijioke Henry
  * Program: WinMingle Community C Training.
  * 
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
    if (d)
    {
        d->name = name;
        d->age = age;
        d->owner = owner;
    }
}

