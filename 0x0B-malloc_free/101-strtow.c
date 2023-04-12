#include <stdlib.h>
#include "main.h"
/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings (words), or NULL on failure.
 */
char **strtow(char *str)
{
    char **words;
    int i, j, k, len, count = 0;

    if (str == NULL || *str == '\0')
        return (NULL);

    /* Count the number of words in the string */
    for (i = 0; str[i] != '\0'; i++)
    {
        if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
            count++;
    }

    /* Allocate memory for the words array */
    words = malloc(sizeof(char *) * (count + 1));
    if (words == NULL)
        return (NULL);

    /* Extract the words from the string */
    for (i = 0, k = 0; k < count; k++)
    {
        /* Skip spaces */
        while (str[i] == ' ')
            i++;

        /* Calculate the length of the current word */
        for (len = 0; str[i + len] != ' ' && str[i + len] != '\0'; len++)
            ;

        /* Allocate memory for the current word */
        words[k] = malloc(sizeof(char) * (len + 1));
        if (words[k] == NULL)
        {
            /* Free memory for previously allocated words */
            for (j = 0; j < k; j++)
                free(words[j]);
            free(words);
            return (NULL);
        }

        /* Copy the current word to the words array */
        for (j = 0; j < len; j++)
            words[k][j] = str[i + j];
        words[k][j] = '\0';

        /* Move to the next word */
        i += len;
    }

    words[count] = NULL; /* Terminate the words array */

    return (words);
}
