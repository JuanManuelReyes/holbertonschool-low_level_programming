#include "main.h"

/**
 *read_textfile - asd
 *@filename: asd
 *@letters: asd
 *Return: asd
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t  length_read, length_write;
	char *buffer;

	if (filename == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);

	if (file_descriptor == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	length_read = read(file_descriptor, buffer, letters);

	if (length_read == -1)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	length_write = write(STDOUT_FILENO, buffer, length_read);

	if (length_write == -1)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	close(file_descriptor);
	free(buffer);
	return (length_read);
}
