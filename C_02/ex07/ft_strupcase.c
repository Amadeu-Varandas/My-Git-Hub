/* #include <stdio.h>

char	*ft_strupcase(char *str);

int	main(void)
{
	char	word[]= "Escola 42";
	printf("A palavra em uppercase %s", ft_strupcase(word));
}
 */
int	check_letter_min(char c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	return(0);
}

char	*ft_strupcase(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if(check_letter_min(str[i]) == 1)
		{
			str[i] = str[i] - 32;
		}
	i++;
	}
	return (str);	
}