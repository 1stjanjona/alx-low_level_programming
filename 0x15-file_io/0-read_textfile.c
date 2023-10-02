#include "main.h"
/**
 * read_textfile - read teaxt file to print POSIX
 * @filename: file name
 * @letters: letters to read and print
 * Return: return (0)
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bts, out;
	char *bfr;

	if (filename == NULL || letters == '\0')
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	bfr = malloc(sizeof(char) * letters);
	bts = read(fd, bfr, letters);
	out = write(STDOUT_FILENO, bfr, bts);
	free(bfr);
	close(fd);
	return (out);
}
