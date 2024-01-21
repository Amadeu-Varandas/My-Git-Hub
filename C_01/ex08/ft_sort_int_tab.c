#include <stdio.h>

void ft_sort_int_tab(int *tab, int size);

int main(void)
{
    int lista[9] = {7,12,5,18,2,15,9,3,19};
    ft_sort_int_tab(lista, 9);
}

void ft_sort_int_tab(int *tab, int size)
{
    int tmp;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (tab[j] < tab[i])
            {
                tmp = tab[i];
                tab[i] = tab[j];
                tab[j] = tmp;
            }          
        }
    }
}