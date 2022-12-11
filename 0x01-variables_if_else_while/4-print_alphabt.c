#include <stdio.h>

/**
 * main -  Prints alphabets in lower case except q and e
 *
 * Return: always 0
 */

int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
	}

	putchar ('\n');

	return(0);

}
