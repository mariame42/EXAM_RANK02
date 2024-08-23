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

char	*ft_strpbrk(const char *s1, const char *s2)
{
    int i = 0;
    while (s1[i])
    {
        if (ft_strchr((char *)s2, s1[i]))
            return ((char *)s1 + i);
        i++;
    }
    return (0);
    
}

int main(void)
{
    printf("%s\n", ft_strpbrk("1234d", "dmathi"));
    printf("%s\n", strpbrk("1234d", "dmathi"));
}