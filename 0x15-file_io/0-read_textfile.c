#include "main.h"
/**
  * read_textfile - This read a file
  * @filename: This is file included
  *@letters: This is number of xters.
  * Return: This returns a ssize_t intger.
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int df;
	ssize_t red, now;
	char *space;

	if (!filename)
		return (0);

	df = open(filename, O_RDONLY);

	if (df == -1)
		return (0);
	space = malloc(sizeof(char) * letters);
	if (!space)
		return (0);

	red = read(df, space, letters);
	now = write(STDOUT_FILENO, space, red);

	close(df);
	free(space);
	return (now);
}
