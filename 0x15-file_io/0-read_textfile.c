#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- when you read the text of a file,
 * you should print the output to be STDOUT.
 *
 * @filename: name the file after you have read the text
 *
 * @letters: refers to the actual numbers of files that should be read
 *
 * Return: type w- that refers to specific numbers of bytes that has been,
 * read and printed type 0 when the function fails or make filename as  NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}
