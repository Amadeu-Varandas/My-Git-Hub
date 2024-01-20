#include <stdio.h>

void dobra(int *x, int *y);

int main(void)
{
    int a;
    int b;
    printf("Valor a: ");
    scanf("%i", &a);
    printf("Valor b: ");
    scanf("%i", &b);

    dobra(&a,&b);
    printf("O valor de a: %i\n", a);
    printf("O valor de b: %i\n", b);

}

void dobra(int *x, int *y)
{
    *x = *x * 2;
    *y = *y / 2;

}