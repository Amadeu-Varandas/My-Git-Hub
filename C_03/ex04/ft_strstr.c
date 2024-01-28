/* #include <stdio.h>

char *ft_strstr(char *str, char *to_find);

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Preencher os argumentos!\n");
		return (1);
	}
	else
	{
		printf("%s\n", ft_strstr("amadeu", "ama"));
		return (0);
	}
} */

char *ft_strstr(char *str, char *to_find)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	
	if (to_find[0] == '\0')
	{
		return (str);
	}

	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
			{
				return (str + i);
			}
			j++;
		}
		i++;
	}
	return (0);
}
