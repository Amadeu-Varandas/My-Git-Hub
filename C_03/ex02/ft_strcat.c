/* #include <stdio.h>

char *ft_strcat(char *dest, char *src);
int	ft_strlen(char *str);

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		printf("Preencher os argumentos!\n");
		return (1);
	}
	else
	{
		ft_strlen(argv[1]);
		printf("%s\n", ft_strcat(argv[1], argv[2]));
		return (0);
	}
} */

int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

char *ft_strcat(char *dest, char *src)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = ft_strlen(dest);

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return dest;
}


