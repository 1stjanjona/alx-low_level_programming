#include "main.h"
/**
 * _dprintf- dprintf the error and exit
 * @code: the writtwn code
 * @message: message to printed
 * @file_name:: file name
 * Return: no return
*/
void _dprintf(int code, const char *message, const char *file_name)
{
	dprintf(2, message, file_name);
	exit(code);
}
/**
 * cp_file - copy content from file to another file
 * @argc: argument count
 * @argv: argument vector
 * Return: too much returns
*/
int cp_file(int argc, char *argv[])
{
	int fd1, fd2;
	ssize_t bts_rd, bts_wr;
	char bfr[BUF_SIZE];

	if (argc != 3)
	{
		_dprintf(97, "Usage: cp file_from file_to\n", NULL);
	}
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		_dprintf(98, "Error: Can't read from file %s\n", argv[1]);
	}
	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd2 == -1)
	{
		close(fd1);
		_dprintf(99, "Error: Can't write to filr %s\n", argv[2]);
	}
	while ((bts_rd = read(fd1, bfr, BUF_SIZE)) > 0)
	{
		bts_wr = write(fd2, bfr, bts_rd);
		if (bts_wr != bts_rd)
		{
			close(fd1);
			close(fd2);
			_dprintf(99, "Error: Can't write to file %s\n", argv[2]);
		}
	}
	if (bts_rd == -1)
	{
		close(fd1);
		close(fd2);
		_dprintf(98, "Error: can't read from file %s\n", argv[1]);
	}
	if (close(fd1) == -1 || close(fd2) == -1)
	{
		_dprintf(100, "Error: Can't close fd %d\n", (fd1 == -1) ? fd1 : fd2);
	}
	return (0);
}
