#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print letters in reverse
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letters;

	for (letter = 'z'; letter >= 'a' --letter)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
