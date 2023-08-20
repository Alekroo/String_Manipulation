#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int distance_between(char* s, char c)
{	
	int size = strlen(s);	
	int counter = 0;
	int first_occurance_position = 0;
	int second_occurance_position = 0;
	int occurrences = 0;
	int i;
	for(i = 0; i < size; i++)
	{

		if(tolower(s[i]) == c && occurrences == 0)
		{
			first_occurance_position = counter;
			occurrences++;
		}
		else if(tolower(s[i]) == c && occurrences == 1) 
		{
			second_occurance_position = counter;
			occurrences++;
		}
		counter++;

	}

	int distance = second_occurance_position - first_occurance_position;
	if( occurrences != 2 )
	{
		distance = -1;
	}
	else
	{
		distance = second_occurance_position - first_occurance_position;
	}

	return distance;
}
