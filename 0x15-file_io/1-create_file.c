#include "main.h"

/**
 * create_file - creates a file filename
 * @filename: name of file to create
 * @text_content: contents to put in filename
 * Return: 1 or -1
 */

int create_file(const char *filename, char *text_content)
{
	int fd, fw;
	int i = 0;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);

	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
			i++;
		fw = write(fd, text_content, i);
	}
	if (fw == -1)
		return (-1);

	return (1);
}
