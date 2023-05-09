#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void close_file(int fd);
char *create_buffer(char *file);

/**
 * create_buffer - in order to create a buffer you need to Allocates,
 * 1024 bytes for that buffer.
 * @file: Chars are being stored in the file buffer's name.
 *
 * Return: return with B as apointer to the buffer you have just allocatred.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffer);
}

/**
 * close_file - first you need to Close file descriptors.
 * @fd: second file descriptor is finally closed.
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - the contents of a file must be copied to another file.
 * @argc: refers to numbers of argumentsthat should be supplied to the program.
 *
 * @argv: indicates to an array of pointers that points to the arguments.
 *
 * Return: if you succeed return with 0 .
 * Description: if you count the  argument incorrectly so,
 * your exit code will be 97.
 *
 * If file_from when the file does not exist or cannot be read,
 * your exit code will be 98.
 * If file_to if the file cannot be made or written to,
 * your exit code gonna be 99.
 * If file_to or file_from in case that you can't close the file,
 * your exit code will be 100.
 */
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		w = write(to, buffer, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		r = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
