int		ft_putchar(char c);

int		ft_putstr(char const * str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}
