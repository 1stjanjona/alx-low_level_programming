#include "main.h"
/**
 * main - copy content from file to another file
 * @argc: argument count
 * @argv: argument vector
 * Return: on succes return (0)
*/
int main(int argc, char *argv[])
{
	int fd1 = 0, fd2 = 0;
	ssize_t bts_rd, bts_wr;
	char bfr[BUF_SIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	fd1 = open(argv[1], O_RDONLY);
	if (fd1 == -1)
	{
		dprintf(STDERR_FILENO, ERR_NOREAD, argv[1]), exit(98);
	}
	fd2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (fd2 == -1)
	{
		dprintf(STDERR_FILENO, ERR_NOWRITE, argv[2]), exit(99);
	}
	while ((bts_rd = read(fd1, bfr, BUF_SIZE)) > 0)
	{
		bts_wr = write(fd2, bfr, bts_rd);
		if (bts_wr != bts_rd)
		{
			close(fd2);
			dprintf(STDERR_FILENO, ERR_NOWRITE, argv[2]), exit(99);
		}
	}
	if (bts_rd == -1)
	{
		close(fd2);
		dprintf(STDERR_FILENO, ERR_NOREAD, argv[1]), exit(98);
	}
	if (close(fd1) == -1)
	{
		dprintf(STDERR_FILENO, ERR_NOCLOSE, fd1), exit(100);
	}
	if (close(fd2) == -1)
	{
		dprintf(STDERR_FILENO, ERR_NOCLOSE, fd2), exit(100);
	}
	return (1);
}
