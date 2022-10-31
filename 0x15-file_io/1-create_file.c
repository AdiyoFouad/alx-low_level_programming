#include "main.h"

/**
 * create_file - creates a file
 * @filename: filename to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 if success) & -1 failure
*/

int create_file(const char *filename, char *text_content)
{
	int f;
	int l, r;

	if (filename == NULL)
		return (-1);

	/* open file*/
	f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (f == -1)
		return (-1);

	if (!text_content)
		return (1);
	l = 0;
	while (text_content[l] != '\0')
		l += 1;

	r = write(f, text_content, l);
	if (r != l)
		return (-1);
	r = close(f);
	if (r == -1)
		exit(-1);

	return (1);
}
