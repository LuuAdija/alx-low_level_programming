#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 * @str: the string to be capitalised
 * Retuen: a pointer to the changed string
 */
char *cap_string(char *str)
{
	int index = 0;

	while (str[index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
			index++;
				if (str[index - 1] == '' ||
				str[inex - 1] == '\t' ||
				str[inex - 1] == '\n' ||
				str[inex - 1] == ',' ||
				str[inex - 1] == ';' ||
				str[inex - 1] == '.' ||
				str[inex - 1] == '!' ||
				str[inex - 1] == '?' ||
				str[inex - 1] == '"' ||
				str[inex - 1] == '(' ||
				str[inex - 1] == ')' ||
				str[inex - 1] == '{' ||
				str[inex - 1] == '}' ||
				index == 0)
					str[index] -= 32;
		index++;
	}
	return (str);
}
