#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int ft_strlen(char *str)
{
    int i = 0;
    while (str[i])
        i++;
    return (i);
}
char    *ft_strdup(char *src)
{
    int i = 0;
    char *str = malloc(sizeof(char) * ft_strlen(src));
    while (src[i])
    {
        str[i] = src[i];
        i++;
    }
    return (str[i] = '\0', str);
}

// int main(void)
// {
//     printf("%s\n", ft_strdup("mariam"));
//     printf("%s", strdup("mariam"));
// }