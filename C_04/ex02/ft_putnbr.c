#include <unistd.h>
/* #include <stdio.h>
#include <limits.h>

void	ft_putnbr(int nb);
void	ft_putchar(char c);

int	main(void)
{
	printf("O limite inferior: %i\n", INT_MIN);
	printf("O limite superior: %i\n", INT_MAX);
	ft_putnbr(1347);
} */

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + '0');
	}
}
