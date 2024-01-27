/* #include <stdio.h>

int	ft_str_is_printable(char *str);
int	check_char(char c);

int	main(void)
{
	if(ft_str_is_printable("escola 42") ==1)
	{
		printf("OK");
	}
	else
	{
		printf("NOT OK");
	}
} */

int	check_char(char c)
{
	if (c >= 20 && c <= 126)
	{
		return (1); //retorna 1 caso o char seja uma letra maiuscula
	}
	else
	{
		return (0);
	}
	
}

int	ft_str_is_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (check_char(str[i]) == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);	
}
