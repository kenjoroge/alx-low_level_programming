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
	int i, j = 0, k = 0;
	char c[] = "Error", *find_letter;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			find_letter = argv[i];
			while (*find_letter != 0)
			{
				if (*find_letter < 47 || *find_letter > 57)
				{
					printf("%s\n", c);
					return (1);
				}
				find_letter++;
			}
			k = atoi(argv[i]);

			j += k;
		}
		printf("%d\n", j);
	}
	else
		printf("%d\n", 0);
	return (0);
}
