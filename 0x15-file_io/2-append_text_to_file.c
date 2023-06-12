#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: The file that append text on it
 * @text_content: The content that append into a file
 * Return: 1 if it success & -1 if failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, j, b = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[b])
			b++;
		j = write(fd, text_content, b);
		if (j != b)
			return (-1);
	}

	close(fd);

	return (1);
}
