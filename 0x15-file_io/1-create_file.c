#include "main.h"

/**
 * create_file - creates a file and writes a string on it.
 * @filename: name of the file to be created.
 * @text_content: NULL terminated string to write to the file.
 *
 * Return: 1 on success; -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, i = 0, w = -1;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
			i++;

		w = write(fd, text_content, i);
		if (w == -1)
			return (-1);
	}
	return (1);
}

