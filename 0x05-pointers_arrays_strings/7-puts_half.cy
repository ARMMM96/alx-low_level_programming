/**
 * Prints the second half of a string, followed by a new line.
 * If the number of characters is odd, prints the last n characters of the string,
 * where n = (length_of_the_string - 1) / 2.
 *
 * @param str A pointer to the string to be printed.
 */
void puts_half(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	int start;

	if (len % 2 == 0)
	{
		start = len / 2;
	}
	else
	{
		start = (len - 1) / 2;
	}

	for (int i = start; i < len; i++)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
