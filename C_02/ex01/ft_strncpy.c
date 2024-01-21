#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n);

int main(void)
{
    char *string1 = "Amadeu";
    char string2[20];
    printf(":%s|%s:\n", string1, string2);
    
    ft_strncpy(string2, string1, 5);
    
    printf(":%s|%s:\n", string1, string2);
}

char *ft_strncpy(char *dest, char *src, unsigned int n)
{
    unsigned int	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return dest;
}

