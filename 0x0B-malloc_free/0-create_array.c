#include "main.h"


/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: The array of chars size
 * @c: The character to initiat the chars with
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}
