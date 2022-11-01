#include "main.h"

/**
 * read_textfile - reads text file and prints it to the POSIX standard output.
 * @filename: name of the file to be read and printed.
 * @letters: is the number of letters it should read and print.
 *
 * Return: the actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = -1;
	char buf[1024];
	ssize_t r = 0, w = 0;
	ssize_t ra = 0, bsize = sizeof(buf) / sizeof(buf[0]);

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	while (letters > 0)
	{
		if (letters < (size_t)bsize)
			bsize = (ssize_t)letters;

		ra = read(fd, buf, bsize);
		if (ra <= 0)
			return (0);
		r = r + ra;
		if (ra < bsize)
		{
			w = write(STDOUT_FILENO, buf, ra);
			if (w != ra)
				return (0);
			break;
		}
		w = write(STDOUT_FILENO, buf, bsize);
		if (w != bsize)
			return (0);
		letters = letters - bsize;
	}
	close(fd);
	return (r);
}

