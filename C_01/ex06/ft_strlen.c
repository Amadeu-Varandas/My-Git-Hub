#include <stdio.h>

int ft_strlen(char *str);

int main(void)
{
    char *word = "Amadeu Varandas";
    printf("O tamanho da palavra é: %i\n", ft_strlen(word));

    
}

int ft_strlen(char *str)
{
    int tam = 0;
    while(str[tam]!='\0')
    {
        tam++;
    }
    return tam;
    
}