/* #include <stdio.h>

int	ft_strlen(char *str);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
int main(void)
{
	char dest[7] = "amadeu";
	printf("%i\n", ft_strlcat(dest, "amadeu", 8));
} */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dlen;
	unsigned int	slen;

	i = 0;
	j = ft_strlen(dest);
	dlen = j;
	slen = ft_strlen(src);

	if (size == 0 || size <= dlen)
	{
		return (slen + size);
	}

	while (src [i] != '\0' && i < size - dlen - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dlen + slen);
}
