#include "main.h"

/**
  * _strlen- count the lenght of a string
  * @s: Pointer of a char
  * Return: The value of the numbers of characters
  **/

ssize_t _strlen(char *s)

{
	ssize_t count = 0;

	for (count = 0; s[count] ; count++)
	{
	}
	return (count);
}


/**
 * create_file- Function that create a file using system calls and can write
 * the text given in argument in the file.
 *
 * @filename: Name of the file you want to create. The autorisation
 * of this file are -rw------- . If the file already exist, the autorisations
 * don't change and write the text given in argument in it,
 * it overwrites the old content.
 *
 * @text_content: text you want to write in your file,
 * if there is no content to write, it just create the file
 *
 * Return: -1 if the function failed, 1 if it succeed.
 */

int create_file(const char *filename, char *text_content)
{
	int file_descriptor = 0;
	ssize_t number_of_bytes = 0;
	ssize_t bytes_written = 0;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_TRUNC);

	if (file_descriptor == -1)
		file_descriptor = open(filename, O_WRONLY | O_CREAT, 0600);

	if (file_descriptor == -1)
		return (-1);

	if (text_content != NULL)
	{
		number_of_bytes = _strlen(text_content);

		bytes_written = write(file_descriptor, text_content, number_of_bytes);
		close(file_descriptor);

		if (bytes_written == -1)
			return (-1);

		return (1);
	}
	close(file_descriptor);
	return (1);
}
