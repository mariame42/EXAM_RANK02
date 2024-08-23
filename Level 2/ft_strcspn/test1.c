#include <stdio.h>
#include <string.h>
/*
I used ft_strchr in the three functions( ft_strcspn , ft_strspn, ft_strpbrk) it will help to really understanding.
*/
char *ft_strchr(char *str, char search_for)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] == search_for)
            return (str + i);
        i++;
    }
    return (0);
}

size_t	ft_strcspn(const char *s, const char *reject)
{
    int i = 0;
    while (s[i])
    {
        if (ft_strchr((char *)reject, s[i]) != NULL)
            break ;
        i++;
    }
    return (i);
}

// int main(void)
// {
//     printf("%lu\n", ft_strcspn("mariam", "mari"));
//     printf("%lu\n", ft_strcspn("iam", "mari"));
//     printf("%lu\n", ft_strcspn("maam", "mari"));
//     printf("%lu\n", ft_strcspn("abc", "123"));
//     printf("%lu\n", strcspn("mariam", "mari"));
//     printf("%lu\n", strcspn("iam", "mari"));
//     printf("%lu\n", strcspn("maam", "mari"));
//     printf("%lu\n", ft_strcspn("abc", "123"));
// }