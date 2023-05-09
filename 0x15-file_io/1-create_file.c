#include "main.h"

/**
 * create_file - first thing first Creat a file.
 *
 * @filename: B any pointer that indicates  to the file name,
 * that needs to be generated.
 *
 * @text_content: B should be considered as a pointer to a string,
 * that should be written to the file.
 *
 * Return: when the function fails retur - -1,
 * if not return - 1
 *
 */
int create_file(const char *filename, char *text_content)
{
	int fd, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(fd, text_content, len);

	if (fd == -1 || w == -1)
		return (-1);

	close(fd);

	return (1);
}
