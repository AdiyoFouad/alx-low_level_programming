#include "main.h"

/**
* main - entry point cp file to another file
* @argc: number of arguments
* @argv: arguments file to and file from
* Return: 0 for success
**/

int main(int argc, char *argv[])
{
	char *from_name, *to_name, buff[1024];
	int f_dest, f_source, read_r, write_r;

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	from_name = argv[1], to_name =  argv[2];
	f_source = open(from_name, O_RDONLY);
	if (f_source == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from_name),
		exit(98);
	f_dest = open(to_name, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (f_dest == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to_name), exit(99);
	read_r = read(f_source, buff, 1024);
	if (read_r == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", from_name),
		exit(98);
	while (read_r > 0)
	{
		write_r = write(f_dest, buff, read_r);
		if (write_r == -1)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", to_name), exit(99);
		read_r = read(f_source, buff, 1024);
	}
	if (close(f_source) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_source),
		exit(100);
	if (close(f_dest) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_dest),
		exit(100);
	return (0);
}
