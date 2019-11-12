#include "holberton.h"

/**
 * create_file - Creates a file
 * @filename: Name of the file
 * @text_content: Text to write into the file
 *
 * Return: 1 if success, -1 if not
 */
int create_file(const char *filename, char *text_content)
{
	int ffile, el, i = 0;

	if (filename == NULL)
		return (-1);

	ffile = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (ffile == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(ffile);
		return (1);
	}
	while (text_content[i] != '\0')
		i++;

	el = write(ffile, text_content, i);
	close (ffile);
	if (el == -1)
		return (-1);
	return (1);
}
