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
 * append_text_to_file- Function that add a text passed in argument at the end
 * of an already existing file, via system calls.
 * @filename: Name of the file you want to write in
 * @text_content: Text you want to add at the end of your file
 * Return: -1 if the function failed, 1 if it succeeded
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor = 0;
	ssize_t number_of_bytes = 0;
	ssize_t bytes_written = 0;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_WRONLY | O_APPEND);

	if (file_descriptor == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(file_descriptor);
		return (1);
	}

	number_of_bytes = _strlen(text_content);

	bytes_written = write(file_descriptor, text_content, number_of_bytes);

	if (bytes_written == -1)
	{
		close(file_descriptor);
		return (-1);
	}

	close(file_descriptor);
	return (1);
}
