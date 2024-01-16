#include<unistd.h>

void ft_print_alphabet(void);

int main(void)
{
    ft_print_alphabet();
}

void ft_print_alphabet(void)
{
    for (int i = 122; i > 96; i--)
    {
        write(1, &i+2, 3);
    }
}