#include <unistd.h>
#include <stdio.h>

void ft_print_comb(void);

int main(void)
{
    ft_print_comb();
}

void ft_print_comb(void)
{
    int i;
    for(int i = 100; i <= 120; i++)
    {
        int cen = i / 100;
        int dez = (i % 100) / 10;
        int uni = i % 10;
        

        printf("%i - %i - %i\n", i, dez, uni);  
    }
    
}