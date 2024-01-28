/* #include <stdio.h>

char	*ft_strlowcase(char *str);
int	check_letter(char c);

int	main(int argc, char **argv)
{
	printf("%s", ft_strlowcase(argv[1]));
} */

int	check_letter(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return(0);
}

char	*ft_strlowcase(char *str)
{
	unsigned int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		if (check_letter(str[i]))
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
	return (str);
}


