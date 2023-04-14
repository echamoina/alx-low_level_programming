#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads text file and prints it to POSIX stdout.
 * @filename: pointer to name of file.
 * @letters: number of letters func reads and print.
 * Return: If the function fails or filename is NULL - 0.
 * O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t x, y, z;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	x = open(filename, O_RDONLY);
	y = read(x, buff, letters);
	z = write(STDOUT_FILENO, buff, y);

	if (x == -1 || y == -1 || z == -1 || z != y)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(x);

	return (z);
}
