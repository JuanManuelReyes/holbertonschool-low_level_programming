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
 *append_text_to_file - asd
 *@filename: asd
 *@text_content: asd
 *Return: asd
 **/
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_APPEND);

	if (file_descriptor == -1)
		return (-1);

	if (text_content != NULL)
		write(file_descriptor, text_content, _strlen(text_content));

	close(file_descriptor);
	return (1);
}
