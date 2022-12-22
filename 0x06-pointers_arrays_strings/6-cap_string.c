#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @stg: the string
 * Return: pointer to the changed string
 */

char *cap_string(char *stg)
{
	int ind = 0;

	while (stg[ind])
	{
		while (!(stg[ind] >= 'a' && stg[ind] <= 'z'))
			ind++;

				if (stg[ind - 1] == ' ' ||
					stg[ind - 1] == 't' ||
					stg[ind - 1] == '\n' ||
					stg[ind - 1] == ',' ||
					stg[ind - 1] == ';' ||
					stg[ind - 1] == '.' ||
					stg[ind - 1] == '!' ||
					stg[ind - 1] == '?' ||
					stg[ind - 1] == '"' ||
					stg[ind - 1] == '(' ||
					stg[ind - 1] == ')' ||
					stg[ind - 1] == '{' ||
					stg[ind - 1] == '}' ||
					ind == 0)
				stg[ind] -= 32;

				ind++;
	}
	return (stg);
}
