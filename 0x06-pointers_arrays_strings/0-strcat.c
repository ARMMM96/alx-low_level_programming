/**
 * _strcat - Concatenates two strings
 *
 * @dest: Pointer to the destination string
 * @src: Pointer to the source string
 *
 * Return: Pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	char *original_dest = dest; /* save the original pointer to dest */

	/* move dest pointer to the end of the string */
	while (*dest != '\0')
	{
		dest++;
	}

	/* copy src to the end of dest */
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	/* add terminating null byte to the end of the concatenated string */
	*dest = '\0';

	return (original_dest);
}
