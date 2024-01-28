/* #include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int	main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Preencher os argumentos!\n");
		return (1);
	}
	else
	{
		printf("%i\n", ft_strncmp(argv[1], argv[2], 0));
		return (0);
	}
} */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n != 0)
	{
		i = 0;
		while (s1[i] == s2[i] && s1[i] != '\0' && i < n - 1)
		{
			i++;
		}

		if (s1[i] == s2[i])
		{
			return (0);
		}
		else
		{
			return (s1[i] - s2[i]);
		}
	}
	else
	{
		return	(0);
	}
}