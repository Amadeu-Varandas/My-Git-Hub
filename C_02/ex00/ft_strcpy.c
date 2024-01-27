/* #include <stdio.h>

char *ft_strcpy(char *dest, char *src);

int main(void)
{
    char *string1 = "Amadeu";
    char string2[20];
    printf(":%s|%s:\n", string1, string2);
    ft_strcpy(string2, string1);
    printf(":%s|%s:\n", string1, string2);
} */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}