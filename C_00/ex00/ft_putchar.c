#include <unistd.h>

void ft_putchar(char c);

int main(void)
{
    char c;
    ft_putchar(c);
}

void ft_putchar(char c)
{
    write(1, &c, 1);
}