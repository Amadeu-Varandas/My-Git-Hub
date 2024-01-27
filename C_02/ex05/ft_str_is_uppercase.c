/* #include <stdio.h>

int ft_str_is_uppercase(char *str);
int	check_char(char c);

int	main(void)
{
	if (ft_str_is_uppercase("ESCOLA") == 1)
	{
		printf("Apenas contem letras maiusculas!");
	}
	else
	{
		printf("Contem outros caracteres!");
	}
	
} */

int	check_char(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1); //retorna 1 caso o char seja uma letra maiuscula
	}
	else
	{
		return (0);
	}
	
}

int	ft_str_is_uppercase(char *str)
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