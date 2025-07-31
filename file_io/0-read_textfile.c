#include "main.h"

/**
 * read_textfile- Print in the standard output the numbers of characters
 * wanted from a file, using system calls.
 * @filename: The file you want your characters printed from.
 * @letters: Number of characters you want to be printed.
 * Return: The number of characters read and printed.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	int file_descriptor = 0;
	ssize_t bytes_written = 0;
	ssize_t bytes_read = 0;

	if (filename == NULL || letters <= 0)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);

	if (file_descriptor == -1)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	bytes_read = read(file_descriptor, buffer, letters);

	if (bytes_read == -1)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	free(buffer);
	close(file_descriptor);

	if (bytes_written < 0 || bytes_written != bytes_read)
		return (0);

	return (bytes_written);
}
