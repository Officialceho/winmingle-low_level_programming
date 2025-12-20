#include "main.h"

/**
* Author: Okoye Chijioke Henry
* Program: WinMingle Community C Training
* Description: A function that checks for lowercase character.
*/

 int _islower(int c){
        if (c >= 'a' && c <= 'z')
            return 1;
        else 
            return 0;
}
