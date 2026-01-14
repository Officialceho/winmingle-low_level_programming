#include "dog.h"

/**
  * Author: Okoye Chijioke Henry
  * Program: WinMingle Community C Training.
  *
  */


void free_dog(dog_t *d)
{
    if (!d)
        return;

    free(d->name);
    free(d->owner);
    free(d);
}

