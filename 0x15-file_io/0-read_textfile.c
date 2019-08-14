#include "holberton.h"
/**
 * read_textfile - Function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: File to print.
 * @letters:  Amount of letters to print.
 * Return: The number of characters that can be printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd, n, m;
	char *lt;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY, 0);
	if (fd == -1)
		return (0);
	lt = calloc(letters, sizeof(char));
	if (lt == NULL)
		return (0);
	n = read(fd, lt, letters);
	m = write(1, lt, n);
	close(fd);
	free(lt);
	return (m);
}
