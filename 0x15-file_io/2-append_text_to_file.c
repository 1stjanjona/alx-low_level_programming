#include "main.h"
/**
 * append_text_to_file - function that append a text at the end of file
 * @filename: file name
 * @text_content: the text content to be added
 * Return: return (1) on success, on fail return (-1)
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, out, lngth = 0;

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
	fd = open(filename, O_WRONLY | O_APPEND);
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
