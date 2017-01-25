void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
		ft_putchar(*str++);
	ft_putchar('\n');
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] || s2[i] != '\0')
	{
		if (s1[i] > s2[i])
			return (1);
		if (s1[i] < s2[i])
			return (-1);
		i++;
	}
	return (0);
}

void	ft_sort_params(char **list, int size)
{
	int		a;
	int		i;
	char	*tmp;

	i = 0;
	a = 0;
	while (!a)
	{
		i = 0;
		a = 1;
		while (i < size -1)
		{
			if (ft_strcmp(list[i], list[i + 1]) > 0)
			{
				a = 0;
				tmp = list[i];
				list[i] = list[i + 1];
				list[i + 1] =tmp;
			}
			i++;
		}
	}
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	ft_sort_params(argv + 1, argc -1);
	while (i < argc)
	{
		ft_putstr(argv[i]);
		i++;
	}
	return (0);
}
