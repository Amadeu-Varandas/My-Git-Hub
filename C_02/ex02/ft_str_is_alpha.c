/* #include <stdio.h>

int ft_str_is_alpha(char *str);
int check_ft_str_is_alpha(char c);

int main(void)
{
    char *word = "";
    if (ft_str_is_alpha(word) == 1)
    {
        printf("Apenas contem letras!\n");
    }
    else{
        printf("tambem contem outras coisas\n");
    }

} */

int check_ft_str_is_alpha(char c)
{
    if ((c >= 'a') && (c<='z'))
    {
        return 1;
    }
    else if ((c >= 'A') && (c<='Z'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int ft_str_is_alpha(char *str)
{
    unsigned int i = 0;

    while (str[i] != '\0')
    {
        if(check_ft_str_is_alpha(str[i])==0)
        {
            return 0;
        }
        i++;
    }
    return 1;
    
}
