#include <unistd.h>
#include <stdio.h>

void ft_print_comb(void);

int main(void)
{
    ft_print_comb();
}

void ft_print_comb(void)
{
    for(int i = 1; i <= 50; i++)
    {
        int dez = i / 10;
        int uni = i - dez * 10;
        /*write(1, &uni, 1);*/
        if (dez < uni)
        {
            printf("%i\n", i);
        }
        
    }
}