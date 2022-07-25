#include "main.h"

/**
 * read_textfile - reads a text file
 * @filename: name of text file
 * @letters: num of letters to print
 * Return: signed size_t of bytes printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fileOpen, fileRead, fileWrite;
	FILE *buf;

	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	fileOpen = open(filename, O_RDONLY);
	fileRead = read(fileOpen, buf, letters);
	fileWrite = write(STDOUT_FILENO, buf, fileRead);
	if (fileOpen == -1 || fileRead == -1 || fileWrite == -1 || fileWrite != fileRead)
	{
		free(buf);
		return (0);
	}
	free(buf);
	close(fileOpen);
	return (fileWrite);
}
}
