#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

char* string_between(char* s, char c)
{
	int size = strlen(s);	
	int first_occurance_position = 0;
	int second_occurance_position = 0;
	int occurrences = 0;
	int i;
	for(i = 0; i < size; i++)
	{
		if(s[i] == c && occurrences == 0)
		{
			first_occurance_position = i;
			occurrences++;
		}
		else if(s[i] == c && occurrences == 1) 
		{
			second_occurance_position = i;
			occurrences++;
		}

	}

	char *strbtwn = (char*)malloc(size*sizeof(char*));
	char result[second_occurance_position-first_occurance_position];

	if(occurrences == 2)
	{
		int x = -1;
		int i;
		for(i = first_occurance_position; i < second_occurance_position; i++)
		{
			if(i == (second_occurance_position-first_occurance_position) -1)
			{
				result[x+1] = '\0';	
			}
			result[x]=s[i];
			x++;
		}
		strcpy(strbtwn,result);
		return strbtwn;
	}

	return NULL;
}
