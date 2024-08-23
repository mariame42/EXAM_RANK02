#include <stdio.h>

char    *ft_strcpy(char *s1, char *s2)
{
    int i = 0;

    while (s2[i])
    {
        s1[i] = s2[i];
        i++;
    }
    return (s2[i] = '\0',s2);
}

// int main(void)
// {
//     char src [20]= "mariam";
//     char dest[20] = "lol";
//     printf("%s", ft_strcpy(dest, src));
// }