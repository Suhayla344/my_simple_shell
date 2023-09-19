#include "shell.h"

/**
 * str_betty - create a cpy of a string in uppercase
 * @x: the original string
 * Return: a pointer to the new string or NULL failuer
*/

char *str_betty(char *x)
{
	char *upbetty;
	int y;

	upbetty = malloc(sizeof(char) * (str_len(s) + q));
	if (upbetty == NULL)
		return (NULL);

	for (y = 0; x[y] != '\0'; y++)
	{
		if (x[y] >= 'a' && x[y] <= 'z')
			upbetty[y] = x[y] - 32;
		else
			upbetty[y] = s[y];
	}
	upbetty[y] = '\0';

	return (0);
}
