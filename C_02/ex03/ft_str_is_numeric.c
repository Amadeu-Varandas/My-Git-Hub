/* #include <stdio.h>

int	check_ft_str_is_numeric(char c);
int	ft_str_is_numeric(char *str);

int	main(void)
{
	char *teststring = "123";
	
	if (ft_str_is_numeric(teststring) == 1)
	{
		printf("Apenas contem numeros!");
	}
	else
	{
		printf("Contem outros caracteres");
	}
	
} */

int	check_ft_str_is_numeric(char c)
{
    if ((c >= '0') && (c<='9'))
    {
        return 1; //retorna 1 em caso de numero
    }
	else
	{
		return (0);
	}
}

int	ft_str_is_numeric(char *str)
{
	unsigned int	i;
	i = 0;

	while (str[i] != '\0')
	{
		if (check_ft_str_is_numeric(str[i]) == 0)
		{
			return 0;
		}
		i++;
	}
	return (1);
	
}