#include <stdlib.h>

/*
I used ft_strchr in the three functions( ft_strcspn , ft_strspn, ft_strpbrk) it will help to really understanding.
*/

char *ft_strchar(char *str, char to_search)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] == to_search)
            return (str + i);
        i++;
    }
    return (0);
}

size_t	ft_strspn(const char *s, const char *accept)
{
    size_t i = 0;
    while(s[i])
    {
        if (ft_strchar((char *)accept, s[i]) == 0)
            break ;
        i++;
    }
    return (i);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
    printf("%lu\n", ft_strspn("mariam", "marik"));
    printf("%lu\n", ft_strspn("iam", "marik"));
    printf("%lu\n", ft_strspn("ma7am", "ma7am"));
    printf("%lu\n", strspn("mariam", "marik"));
    printf("%lu\n", strspn("iam", "marik"));
    printf("%lu\n", strspn("ma7am", "ma7am"));
}
