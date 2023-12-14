#include "main.h"
/**
  *
  *
  *
  *
  *
  */
void error_(int file_from, int file_to, char *rgv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", rgv[1]);
		exit(98);
	}
	if (file_to == -1)
	{	
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", rgv[2]);
		exit(99);
	}
}

/**
  
  *
  *
  *
  *
  */
int main(int argc, char *argv[])
{
	int file_from, file_to, err_close;
	ssize_t charc, now;
	char space[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_(file_from, file_to, argv);

	charc = 1024;
	while (charc == 1024)
	{
		charc = read(file_from, space, 1024);
		if (charc == -1)
			error_(-1, 0, argv);
		now = write(file_to, space, charc);
			if (now == -1)	
				error_(0, -1, argv);	
	}

	err_close = close(file_from);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close FD %d\n", file_from);
		exit(100);
	}
	err_close = close(file_to);
	if (err_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
