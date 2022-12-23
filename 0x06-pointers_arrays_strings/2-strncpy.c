#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: destination
 *  @src: source
 *  @n: amount of bytes from src
 *  Return: the pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];
	return (dest);
}
