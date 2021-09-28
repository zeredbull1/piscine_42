#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int	err_msg_open(int argc)
{
	if (argc == 1)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	else if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	return (0);
}

int main(int argc, char **argv)
{
	int a;
	char c[1];

	if(err_msg_open(argc))
		return (0);
	a = open(argv[1], O_RDONLY);
	if (a == -1)
	{
		write(2, "Cannot read file.\n", 18);
		return (0);
	}
	while (read(a, c, 1) != 0)
	{
		write(1, &c[0], 1);
	}
}
