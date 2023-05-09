#include "main.h"

/**
 * append_text_to_file - the text must be atached  at the end of a file
 *
 * @filename: name your pointer B that indicates to the file's name
 *
 * @text_content: The your string content sould consist of,
 * the string that should be added to the end of a file
 *
 * Return: return with - -1 If the function fails or filename is NULL,
 * if the file does not exist and the user does not posses,
 * writing permissionsthen type - -1 anf if it does type - 1
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}
