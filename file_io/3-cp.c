#include "main.h"

/**
 * cp_file- Copy the content of a file to another file using system calls.
 * @file_from: File you want the content to be copied from.
 * @file_to: File of destination, where you want to have the copy of the code
 * in. If the file doesn't exist, create one.
 * Return: 1-> If the origin file doesn't exist or cannot be read.
 * 2-> If the file of destination can't be create or if it can't write in it.
 * 3-> If the file descriptor of a file can't be closed.
 * 0-> If the function succeed.
 */
int cp_file(const char *file_from, const char *file_to)
{
	int file_descriptor, verification = 0;
	char *buffer = malloc(1024);
	ssize_t bytes_read, bytes_written = 0;

	file_descriptor = open(file_from, O_RDONLY);
	if (file_descriptor == -1)
		return (1);
	if (buffer == NULL)
		return (1);
	bytes_read = read(file_descriptor, buffer, 1024);
	verification = close(file_descriptor);
	if (bytes_read == -1)
	{
		free(buffer);
		return (1);
	}
	file_descriptor = open(file_to, O_WRONLY | O_TRUNC);
	if (file_descriptor == -1)
	{
		file_descriptor = open(file_to, O_WRONLY | O_CREAT, 0662);
		if (file_descriptor == -1)
		{
			free(buffer);
			return (2);
		}
	}
	bytes_written = write(file_descriptor, buffer, bytes_read);
	if (bytes_written != bytes_read || bytes_written == -1)
	{
		close(file_descriptor);
		free(buffer);
		return (2);
	}
	verification = close(file_descriptor);
	free(buffer);
	if (verification == -1)
		return (file_descriptor);

	return (0);
}

/**
 * main- Test and execute a function that copy the content of a file to another
 * file.
 * @argc: Numbers of arguments
 * @argv: list of arguments
 * Return: 0 if it succeed, 97 if there isn't the right amount of arguments,
 * 98 if the origin file doesn't exist or can't be read,
 * 99 if the file of destination can't be created or modified,
 * 100 if one of the file descriptor can't be closed
 */

int main(int argc, char *argv[])
{
	int result = 0;
	(void) *argv;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	result = cp_file(argv[1], argv[2]);

	if (result == 1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	else if (result == 2)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	else if (result == 0)
		return (0);

	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", result);
	exit(100);
}
