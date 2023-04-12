#include <stdlib.h>
#include "main.h"
/**
 * strtow - splits a string into words
 * @str: string to split
 *
 * Return: pointer to an array of strings (words),
 * or NULL if str == NULL or str == ""
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, n = 0, len;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
			n++;
	}
	if (n == 0)
		return (NULL);
	words = malloc((n + 1) * sizeof(char *));
	if (words == NULL)
		return (NULL);
	for (i = 0, j = 0; j < n; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			k = i;
			while (str[i] != ' ' && str[i] != '\0')
				i++;
			len = i - k;
			words[j] = malloc((len + 1) * sizeof(char));
			if (words[j] == NULL)
			{
				while (--j >= 0)
					free(words[j]);
				free(words);
				return (NULL);
			}
			for (k = 0; k < len; k++)
				words[j][k] = str[i - len + k];
			words[j][k] = '\0';
			j++;
		}
	}
	words[n] = NULL;
	return (words);
}
