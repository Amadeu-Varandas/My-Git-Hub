#include<stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main(void)
{
    int a=4;
    int b=3;

    printf("%i, %i\n", a ,b);

    ft_ultimate_div_mod(&a, &b);

    printf("%i, %i\n", a ,b);
}

void ft_ultimate_div_mod(int *a, int *b)
{
    *a = *a / *b;
    *b = *a % *b;
}