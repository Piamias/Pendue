#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "pendue.h"
#include <time.h>

int main()
{
	char letter;	
	char word[100] = {0};
	int *letterfound = NULL;
	int i;
	int lives;
	int wordsize;

	wordsize = 0;		
	i = 0;
	lives = 10;	
	if (!pickword(word))
		{
		exit (0);
		}
	wordsize = strlen(word);
	letterfound = malloc(wordsize * sizeof(int));
	if (letterfound == NULL)
	{	
		exit(0);
	}	
	while (i < wordsize)
	{
		letterfound[i] = 0;
		i++;
	}		
	while (lives > 0 && !win(letterfound, wordsize))
	{
		printf("\nYou still have %d more attempt\n", lives);
		printf("Find the word\n");
		while (i < wordsize)
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
	if (win(letterfound, wordsize))
	{
		 printf("\nWin ! The word was %s\n", word);
	}
	else
	{
		printf("\nLost ! The word was %s\n", word);
	}
	return 0;
}
