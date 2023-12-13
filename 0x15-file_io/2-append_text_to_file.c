#include "main.h"
/**
  * append_text_to_file - This appends text to a file
  * @filename: File to be appended
  *@text_content: This is text to be appended.
  * Return: This returns 1 on success
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int df, letter, rw;

	if (filename == NULL)
		return (-1);

	df = open(filename, O_WRONLY | O_APPEND);

		if (df == -1)
			return (-1);
	if (text_content != NULL)
	{
		for (letter = 0; text_content[letter]; letter++)
			;
		rw = write(df, text_content, letter);
	if (rw == -1)
		return (-1);
	}
	close(df);
	return (1);
}
