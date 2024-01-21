#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);
void mostrar(int *lista);

int main(void)
{
    int lista[9] = {1,7,5,6,0,3,4,2,8};
    ft_rev_int_tab(lista, 9);
}

void ft_rev_int_tab(int *tab, int size)
{
    int tmp;
    for (int i = 0; i < size/2; i++)
    {
        tmp = tab[i];
        tab [i] = tab[size-(i+1)];
        tab[size-(i+1)] = tmp;
       
    }
}