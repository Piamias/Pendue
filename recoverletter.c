#include <stdio.h>
#include <stdlib.h>
#include "pendue.h"
#include <ctype.h>

char readC() 
{ 
    char letter;

	letter = 0; 
    letter = getchar();
    letter = toupper(letter);
    while (getchar() != '\n') ;
    return letter;
}
