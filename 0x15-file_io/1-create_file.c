#include "main.h"
/**
  * create_file - This creates a new file
  * @filename: This is the to be created file.
  * @text_content: This is the
  * Return: This returns an integer.
  */
int create_file(const char *filename, char *text_content)
{
	int df, letter, rw;

	if (filename == NULL)
		return (-1);
	df = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (df == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";

	for (letter = 0; text_content[letter]; ++letter)
		;

	rw = write(df, text_content, letter);

	if (rw == -1)
		return (-1);
	close(df);
	return (1);
}
