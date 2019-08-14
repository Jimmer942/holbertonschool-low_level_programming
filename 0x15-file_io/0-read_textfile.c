#include "holberton.h"
/**
 * read_textfile - Function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: File to print.
 * @letters:  Amount of letters to print.
 * Return: The number of characters that can be written.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n, m;
	int fd;
	char *lt;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY, 0600);
	if (fd == -1)
		return (0);
	lt = malloc(letters);
	if (lt == NULL)
		return (0);
	n = read(fd, lt, letters);
	if (n == -1)
	{
		return (0);
		free(lt);
	}
	m = write(1, lt, n);
	if (m == -1)
	{
		return (0);
		free(lt);
	}
	close(fd);
	free(lt);
	return (m);
}
