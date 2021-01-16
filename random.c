#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "pendue.h"
#include <time.h>

int randompick(int numbermax)
{
	int wordchoice;

	srand(time(NULL));
	wordchoice = (rand() % (numbermax - 1 + 1)) + 1;
	return wordchoice;
}
