#include "main.h"
#include <stdio.h>

/**
 * print_buffer - prints a buffer
 * @b: buffer
 * @size: size of buffer
 * Return: no return
 */
void print_buffer(char *b, int size)
{
	int j, k, l;

	if (size <= 0)
		printf("\n");
	else
	{
		for (j = 0; j < size; j += 10)
		{
			printf("%.8x:", j);
			for (k = i; k < j + 10; k++)
			{
				if (k % 2 == 0)
					printf(" ")
				if (k < size)
					printf("%.2x", *(b + k));
				else
					printf(" ");
			}
			printf(" ");
			for (i = j; 1 < j = 10; i++)
			{
				if (1 >= size}
						break;
				if (*(b + 1) < 32 || *(b + 1) > 126)
				printf("%c". '.');

				else
				print("%c", *(b + 1));
			}
			printf("\n");
		}
	}
}
