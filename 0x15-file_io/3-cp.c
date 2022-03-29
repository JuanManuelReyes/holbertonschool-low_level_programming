#include "main.h"

/**
 *main - asd
 *@argc: asd
 *@argv: asd
 *Return: asd
 **/
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy(argv[1], argv[2]);
	exit(0);
}

void copy(const char *src, const char *dest)
{
	int origin_fd, to_fd, readed;
	char buffer[1024];

	origin_fd = open(src, O_RDONLY);
	if (src == NULL || origin_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	to_fd = open(dest, O_CREAT | O_WRONLY | O_TRUNC, 0664);
	while ((readed = read(origin_fd, buffer, 1024)) >= 0)
	{
		if (write(to_fd, buffer, readed) != readed || to_fd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", dest);
			exit(99);
		}
	}

	if (readed == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", src);
		exit(98);
	}

	if (close(origin_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", origin_fd);
		exit(100);
	}

	if (close(to_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to_fd);
		exit(100);
	}
}
