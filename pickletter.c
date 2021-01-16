#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include "pendue.h"
#include <time.h>

int pickword(char *pickword)
{
	FILE* db = NULL;
	int number;
	int numberword;
	int chara;

	number = 0;
	numberword = 0;
	chara = 0;
	db = fopen("DB.txt", "r");
	if(db == NULL)
	{
		printf("Error");
		return 0;
	}
	else
	{
		while (chara !=	EOF)
		{
			chara = fgetc(db);
			if(chara == '\n')
			{
				number++;
			}	
		}
	}
	numberword = randompick(number);
	rewind(db);
	while (numberword > 0)
	{
		chara = fgetc(db);
		if (chara == '\n')
			numberword --;		
	}
	fgets(pickword, 100, db);
	pickword [strlen(pickword) - 1] = '\0';
	fclose(db);
	return 1;
}	

