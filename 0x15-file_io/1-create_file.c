#include "main.h"

/**
 *create_file - creates a file
 *@filename: filename
 *@text_content: contents written in the file
 *
 *Return: 1 if it suceeds, -1 if not
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int nletters;
	int rwr;

	if (!filename0
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	:wq

