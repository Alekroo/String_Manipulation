#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int stringsum(char* s) 
{
	int strSize = strlen(s);	

	int sum = 0;
	int counter = 0;
	int i;
	for (i = 0; i < strSize; i++)
	{
		if(s[i] == 'a' || s[i] == 'A') 
		{
			sum = sum + 1;
			counter++;
		}
		else if(s[i] == 'b' || s[i] == 'B') 
		{
			sum = sum + 2;
			counter++;
		}
		else if(s[i] == 'c' || s[i] == 'C') 
		{
			sum = sum + 3;
			counter++;
		}
		else if(s[i] == 'd' || s[i] == 'D') 
		{
			sum = sum + 4;
			counter++;
		}
		else if(s[i] == 'e' || s[i] == 'E') 
		{
			sum = sum + 5;
			counter++;
		}
		else if(s[i] == 'f' || s[i] == 'F') 
		{
			sum = sum + 6;
			counter++;
		}
		else if(s[i] == 'g' || s[i] == 'G') 
		{
			sum = sum + 7;
			counter++;
		}
		else if(s[i] == 'h' || s[i] == 'H') 
		{
			sum = sum + 8;
			counter++;
		}
		else if(s[i] == 'i' || s[i] == 'I') 
		{
			sum = sum + 9;
			counter++;
		}
		else if(s[i] == 'j' || s[i] == 'J') 
		{
			sum = sum + 10;
			counter++;
		}
		else if(s[i] == 'k' || s[i] == 'K') 
		{
			sum = sum + 11;
			counter++;
		}
		else if(s[i] == 'l' || s[i] == 'L') 
		{
			sum = sum + 12;
			counter++;
		}
		else if(s[i] == 'm' || s[i] == 'M') 
		{
			sum = sum + 13;
			counter++;
		}
		else if(s[i] == 'n' || s[i] == 'N') 
		{
			sum = sum + 14;
			counter++;
		}
		else if(s[i] == 'o' || s[i] == 'O') 
		{
			sum = sum + 15;
			counter++;
		}
		else if(s[i] == 'p' || s[i] == 'P') 
		{
			sum = sum + 16;
			counter++;
		}
		else if(s[i] == 'q' || s[i] == 'Q') 
		{
			sum = sum + 17;
			counter++;
		}
		else if(s[i] == 'r' || s[i] == 'R') 
		{
			sum = sum + 18;
			counter++;
		}
		else if(s[i] == 's' || s[i] == 'S') 
		{
			sum = sum + 19;
			counter++;
		}
		else if(s[i] == 't' || s[i] == 'T') 
		{
			sum = sum + 20;
			counter++;
		}
		else if(s[i] == 'u' || s[i] == 'U') 
		{
			sum = sum + 21;
			counter++;
		}
		else if(s[i] == 'v' || s[i] == 'V') 
		{
			sum = sum + 22;
			counter++;
		}
		else if(s[i] == 'w' || s[i] == 'W') 
		{
			sum = sum + 23;
			counter++;
		}
		else if(s[i] == 'x' || s[i] == 'X') 
		{
			sum = sum + 24;
			counter++;
		}
		else if(s[i] == 'y' || s[i] == 'Y') 
		{
			sum = sum + 25;
			counter++;
		}
		else if(s[i] == 'z' || s[i] == 'Z') 
		{
			sum = sum + 26;
			counter++;
		}

	}

	if(counter == strSize)
	{
		return sum;
	}

	return -1;
}

