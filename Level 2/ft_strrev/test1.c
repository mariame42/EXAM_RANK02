#include <stdio.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}
char    *ft_strrev(char *str)
{
    int len = ft_strlen(str) - 1;
    int i = 0;
    char tmp;
    while (i < len)
    {
        tmp = str[i];
        str[i] = str[len];
        str[len] = tmp;
        len--;
        i++;
    }
    return(str);
}

int main(void)
{
    char str[] = "01234567890123456789";
    printf("%s", ft_strrev(str));
}