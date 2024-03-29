#include "main.h"

/**
 * read_textfile - reads a text file
 * @filename: has the name of the file
 * @letters: Size of the file
 *
 * Return: Always 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	ssize_t fpRead, fpWrite, fpClose;
	char *lineBuffer;

	if (filename == NULL)
		return (0);
	lineBuffer = malloc(sizeof(char) * letters);

	if (lineBuffer == NULL)
		return (-1);
	fp = open(filename, O_RDONLY);

	if (fp == -1)
		return (0);
	fpRead = read(fp, lineBuffer, letters);

	if (fpRead == -1)
		return (-1);
	fpWrite = write(STDOUT_FILENO, lineBuffer, fpRead);

	if (fpWrite == -1)
		return (-1);
	fpClose = close(fp);

	if (fpClose == -1)
		return (-1);

	return (fpRead);
}
