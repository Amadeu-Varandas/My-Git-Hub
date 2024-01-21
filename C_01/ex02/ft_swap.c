void ft_swap(int *a, int *b);

int main(void)
{
    int a;
    int b;

    ft_swap(&a, &b);
}

void ft_swap(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}