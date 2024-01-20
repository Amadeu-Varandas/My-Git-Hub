#include<unistd.h>

void ft_print_alphabet(void);

int main(void)
{
    ft_print_alphabet();
}

void ft_print_alphabet(void)
{
    for (char i = 'a'; i <= 'z'; i++)
    {
        write(1, &i, 1);
    }
}