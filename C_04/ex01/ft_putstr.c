#include <unistd.h>

/*void ft_putstr(char *str);

int main(int argc, char **argv)
{
	ft_putstr(argv[1]);
} */

void ft_putstr(char *str)
{
	unsigned int	i;

	i = 0;

	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}