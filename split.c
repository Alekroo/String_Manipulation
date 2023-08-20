#include <stdio.h>	
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAXSTRLEN 40

char** split(char* s)
{
	int i;
	char **wordArray;


	wordArray = malloc(sizeof(char*) * MAXSTRLEN); 
	for (i = 0; i < 30; ++i) {
		wordArray[i] = malloc(sizeof(char) * MAXSTRLEN);
	}

	i = 0;
	int j = 0;
	int k = 0;
	while( s[i] != '\0')  
	{
	    while (s[i] != '\0' && isspace(s[i])) {
	     i++; 
	    }

	    k = 0;
	    while (s[i] != '\0' && !isspace(s[i])) { 
	        wordArray[j][k] = s[i];
	        k++;
	        i++;
	    }
	    wordArray[j][k] = '\0'; 
	    j++;
	}
	wordArray[j] = NULL;


	return wordArray;	
}   


