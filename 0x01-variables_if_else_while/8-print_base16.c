#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - print all the number of base 16 in lowercase.
 *
 * return: Always 0.
 */
int main(void)
{
	/*
	 * main - print all the number of base 16 in lowercase.
	 */
	int num;
	char letter;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
