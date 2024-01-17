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
    for(int i = 1; i < 1000; i++)
    {
        int cen = i / 100;
        int dez = (i % 100) / 10;
        int uni = i % 10;
        
        if (cen < dez && dez < uni)
        {
            printf("%03d\n", i);
            
        }
                  
    }
    
}

