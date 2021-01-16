#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int win(int letterfound[])
{
	int i;
	int playerWin;
	
	i = 0;
	playerWin = 1;
	while (i < 6)
	{
		if (letterfound[i] == 0)
			playerWin = 0;
		else
		{
		}
		i++;
	}
	return playerWin;
}		
