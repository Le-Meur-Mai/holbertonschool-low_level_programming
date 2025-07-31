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
	int success = 0;
	ssize_t bytes_written = 0;
	ssize_t counting = 0;

	if (filename == NULL || letters <= 0)
		return (0);

	buffer = malloc(letters);
	if (buffer == NULL)
		return (0);

	success = open(filename, O_RDONLY);

	if (success == -1)
	{
		free(buffer);
		return (0);
	}

	counting = read(success, buffer, letters);

	if (counting == -1)
	{
		free(buffer);
		return (0);
	}

	bytes_written = write(1, buffer, counting);

	free(buffer);
	close(success);

	if (bytes_written < 0 || bytes_written != counting)
		return (0);

	return (bytes_written);
}
