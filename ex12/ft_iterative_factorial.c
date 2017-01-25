
int	ft_iterative_factorial(int nb)
{
	int a;
	int i;

	i = 1;
	a = 1;
	while(a <= nb)
	{
		i = a * i;
		a++;	
	}
	return (i);	
}
