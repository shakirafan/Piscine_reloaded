#include <stdlib.h>

int		ft_strlen(char* str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strdup(char* src)
{
	char *string;
	int i ;

	i = 0;

	string = (char *)malloc(sizeof(*string) * ft_strlen(src) + 1);
	while (src[i] != '\0')
	{
		string[i] = src[i];
		i++;
	}
	return (string);
}
