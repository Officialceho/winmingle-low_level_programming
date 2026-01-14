#include "dog.h"

/**
  * Author: Okoye Chijioke Henry
  * Program: WinMingle Community C Training.
  * 
  */

void print_dog(struct dog *d)
{
    if (!d)
        return;

    printf("Name: %s\n", d->name ? d->name : "(nil)");
    printf("Age: %.6f\n", d->age);
    printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}

