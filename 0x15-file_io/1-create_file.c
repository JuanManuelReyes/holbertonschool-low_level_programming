#include "main.h"

/**
 * _strlen - asd
 * @string: asd
 * Return: asd
 **/
unsigned int _strlen(const char *string)
{
	unsigned int i = 0;

	while (string[i] != '\0')
		i++;

	return (i);
}

/**
 *create_file - asd
 *@filename: asd
 *@text_content: asd
 *Return: asd
 **/
int create_file(const char *filename, char *text_content)
{
	int file_descriptor;
	ssize_t length_write;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	/* 0600 = (S_IRUSR  00400 + S_IWUSR  00200) */

	if (file_descriptor == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(file_descriptor);
		return (1);
	}

	length_write = write(file_descriptor, text_content, _strlen(text_content));

	if (length_write == -1)
	{
		close(file_descriptor);
		return (-1);
	}

	close(file_descriptor);
	return (1);
}
