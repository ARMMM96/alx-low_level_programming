#include "main.h"
#include <stdlib.h>
/**
*create_array - creates an array of chars,
*	and initializes it with a specific char.
*
*@size: the size of the array
*
*@c: the char used to initialize the array
*
*Return: a pointer to the array, or NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size == 0)
		return (NULL);

	p = malloc(sizeof(char) * size);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		p[i] = c;

	return (p);
}
