#include "holberton.h"

/**
 * append_text_to_file - Appends text to a file
 * @filename: Name of the file
 * @text_content: Tetx to append to the file
 *
 * Return: 1 if success, -1 if not
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int ffile, el, i = 0;

	if (filename == NULL)
		return (-1);

	ffile = open(filename, O_APPEND | O_WRONLY);

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
