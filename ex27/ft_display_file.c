#include "display_file.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return(i);
}

void	ft_putstr_fd(char *str, int fd)
{
	write(fd, str, ft_strlen(str));
}

void	ft_display_file(char *name)
{
	int		fd;
	int		dp;
	char	buf;

	buf = BUF_SIZE + 1;
	fd = open(name, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr_fd("Failed to open file.\n", 2);
		return ;
	}

	dp = 1;
	while (dp)
	{
		ret = read(fd, buf, BUF_SIZE);
		buf[dp] = '\0';
		ft_putstr_fd(buf, 1);
	}
	if (close(fd) == -1)
	{
		ft_putstr_fd("Failed to close file.\n", 2);
		return;
	}
}

int		main(int argc, char **argv)
{
	if(argc < 2)
	{
		ft_putstr_fd("File name missing.\n", 2);
		return (0);
	}
	if(argc > 2)
	{
		ft_putstr_fd("Too many arguments.\n", 2);
		return (0);
	}
	ft_display_file(argv[1]);
	return (0);
}
