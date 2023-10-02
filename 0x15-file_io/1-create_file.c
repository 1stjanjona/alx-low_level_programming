#include "main.h"
/**
 * create_file - create function thta creates filename
 * @filename: file name to be created
 * @text_content: the text content of filename
 * Return: return (1) on success, or return (-1) on fail
*/
int create_file(const char *filename, char *text_content)
{
	int fd;
	int out;
	int lngth = 0;

	if (filename == NULL || text_content == NULL)
	{
		return (-1);
	}
	while (text_content && text_content[lngth] != '\0')
	{
		lngth++;
	}
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	out = write(fd, text_content, lngth);
	if (fd == -1 || out == -1)
	{
		return (-1);
	}
	close(fd);
	return (1);
}
