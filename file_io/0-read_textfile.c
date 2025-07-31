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
	ssize_t counting = 0;

	buffer = malloc(letters);

	if (filename == NULL || letters <= 0)
		return (0);
	success = open(filename, O_RDONLY);

	if (success == -1)
		return (0);
	counting = read(success, buffer, letters);

	if (counting == -1)
		return (0);

	success = 0;

	success = write(1, buffer, counting);

	free(buffer);
	close(success);

	if (success == -1 || success != counting)
		return (0);

	return (counting);
}
