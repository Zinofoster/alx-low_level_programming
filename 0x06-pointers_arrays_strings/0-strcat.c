#include "main.h"

/**
 *_strcat - concatenates the string pointed to be @src to
 * the end of the string  pointed to @dest
 * @dest: strings that will be appended
 * @src: strings to be concatenated upon
 *
 * Return: return pointers to @dest
 */
char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
