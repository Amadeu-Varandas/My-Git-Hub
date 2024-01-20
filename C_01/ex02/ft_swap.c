#include <stdio.h>

void ft_swap(int *a, int *b);

int main(void)
{
    int a = 1;
    int b = 2;
    printf("Antes a: %i\n", a);
    printf("Antes b: %i\n", b);

    ft_swap(&a, &b);

    printf("Depois a: %i\n", a);
    printf("Depois b: %i\n", b);
}

void ft_swap(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}