/* #include <stdio.h>

char *ft_strncat(char *dest, char *src, unsigned int nb);
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
		printf("%s\n", ft_strncat(argv[1], argv[2], 3));
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

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = ft_strlen(dest);

	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';

	return dest;
}