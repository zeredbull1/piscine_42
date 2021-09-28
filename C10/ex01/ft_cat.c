#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int	err_msg_open(int argc)
{
	char c[1];

	if (argc == 1)
	{

		while (read(0, c, 1) != 0)
		{
			write(1, &c[0], 1);
		}
		return (1);
	}
	return (0);
}

int main(int argc, char **argv)
{
	int a;
	char c[1];
	int i;

	i = 1;
	if(err_msg_open(argc))
		return (0);
	while(argv[i])
	{
		a = open(argv[i], O_RDONLY);
		if (a == -1)
		{
			write(2, "Cannot read file.\n", 18);
			return (0);
		}
		while (read(a, c, 1) != 0)
		{
			write(1, &c[0], 1);
		}
		i++;
	}
}