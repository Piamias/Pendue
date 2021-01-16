#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int searchletter(char letter,char  word[],int letterfound[])
{
	int i;
	int correctletter;

	i = 0;
	correctletter = 0;
	while (word[i] != '\0')
	{
		if (letter == word[i])
		{
		correctletter = 1;
		letterfound[i] = 1;
		}
		i++;	
	}
	return correctletter;	
}
