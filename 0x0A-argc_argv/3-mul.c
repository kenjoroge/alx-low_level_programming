#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints all arguments it receives
 * @argc: Takes the count
 * @argv: Takes the array of numbers
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i = 0;
	char c[] = "Error";

	if (argc != 3)
	{
		printf("%s\n", c);
		return (1);
	}
	i = atoi(argv[1]) * atoi(argv[2]);
	printf("%i\n", i);

	return (0);
}
