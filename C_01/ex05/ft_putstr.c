#include <stdio.h>
#include <unistd.h>

void ft_putstr(char *str);
int ft_strlen(char *str);

int main(void)
{
    char * word = "Ana";
    ft_putstr(word);
}

void ft_putstr(char *str)
{
    for (int i = 0; i < ft_strlen(str); i++)
    {
        write(1, &str[i], 1);
        write(1, "\n", 1);
    }
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