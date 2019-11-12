#include "holberton.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: Name of the file to read
 * @letters: Number of letters to read and print
 *
 * Return: The actual number of letters it could read and print
 * If the file can not be opened or read, return 0
 * If filename is NULL return 0
 * If write fails return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fread, el;
	char *buffer;

	if (filename == NULL)
		return (0);

	fread = open(filename, O_RDONLY);

	if (fread == -1)
		return (0);

	buffer = malloc(letters);

	if (buffer == NULL)
		return (0);

	el = read(fread, buffer, letters);

	if (el == -1)
	{
		free(buffer);
		return (0);
	}

	close(fread);
	buffer[el] = '\0';
	write(1, buffer, el);
	free(buffer);
	return (el);
}
