/**
 * append_text_to_file - appends text to file
 * @filename: file to append text to
 * @text_content: text to append
 * Return: 1 or -1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, fw;
	int i = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);

	while (text_content[i] != '\0')
	{
		i++;
	}
	fw = write(fd, text_content, i);

	if (fw == -1)
		return (-1);

	return (1);
}
