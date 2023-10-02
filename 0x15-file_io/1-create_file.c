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

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		text_content = "";
	}
	while (text_content[lngth] != '\0')
	{
		lngth++;
	}
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}
	out = write(fd, text_content, lngth);
	if (out == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
