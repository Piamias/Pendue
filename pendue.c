#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "pendue.h"

int main()
{
	char letter;	
	char word[] = "MARRON";
	int letterfound[6] = {0};
	int i;
	int lives;

	i = 0;
	lives = 10;	
	while (lives > 0 && !win(letterfound))
	{
		printf("\nYou still have %d more attempt\n", lives);
		printf("Find the word\n");
		while (i < 6)
		{
			 	
			if (letterfound[i])
			{
				printf("%c", word[i]);	
			}
			else
			{
				printf("*");
			}
			i++;
		}
		printf("\nPick a letter : \n");
		letter = readC();
		if (!searchletter(letter, word, letterfound))
		{
			lives--;
		}
		i = 0;
	}
	if (win(letterfound))
	{
		 printf("\nWin ! The word was %s\n", word);
	}
	else
	{
		printf("\nLost ! The word was %s\n", word);
	}
	return 0;
}
