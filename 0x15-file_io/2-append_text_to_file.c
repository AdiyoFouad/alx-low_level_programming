#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: the file to append to
 * @text_content: the text that will be appended to the file
 * Return: 1 for success & -1 failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f, r, l;

	if (filename == NULL)
		return (-1);
	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
		return (-1);
	if (!text_content)
		return (1);
	l = 0;
	while (text_content[l])
		l += 1;

	r = write(f, text_content, l);

	if (r == -1)
		return (-1);
	r = close(f);
	if (r == -1)
		return (-1);

	return (1);
}
