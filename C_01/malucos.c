#include<stdio.h>

void troca(char **palavra);

int main(void)
{
    char * word = "Amadeu";
    printf("O endereço de word é: %p\n", word);
    troca(&word);
    printf("%s\n", word);
    
}

void troca(char **palavra)
{
    *palavra = "Ana";

}