/* #include <stdio.h>

int ft_strlen(char *str);

int main(int argc, char **argv)
{
	printf("N: %i\n", ft_strlen(argv[1]));
} */

int ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}