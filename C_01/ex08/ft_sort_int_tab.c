/* #include <stdio.h>

void ft_sort_int_tab(int *tab, int size);
void	mostrar(int *vetor);

int main(void)
{
	int lista[7] = {7,12,5,18,42,4,14};
	ft_sort_int_tab(lista, 7);
	mostrar(lista);
}

void	mostrar(int *vetor)
{
	for (int i = 0; i < 7; i++)
	{
		printf("%i, ", vetor[i]);
	}
	printf("\n");
} */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	while (size >= 0)
	{
		i = 0;
		while (i < size - 1)
		{
			if (tab[i] > tab[i + 1])
			{
				tmp = tab [i];
				tab[i] = tab [i + 1];
				tab [i + 1] = tmp;
			}
			i++;
		}
		size--;
	}
}