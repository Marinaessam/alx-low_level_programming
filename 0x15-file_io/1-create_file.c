#include "main.h"

/**
 * create_file - creates a file
 * @filename: The name of file created
 * @text_content: The text to write
 * Return: 1 if it success, -1 if failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, x, y = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[y])
			y++;
		x = write(fd, text_content, y);
		if (x != y)
			return (-1);
	}

	close(fd);

	return (1);
}
