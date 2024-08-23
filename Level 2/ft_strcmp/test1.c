// #include <stdio.h>
// #include <string.h>

int    ft_strcmp(char *s1, char *s2)
{
    if (s1 < s2)
        return (-1);
    if (s1 > s2)
        return (1);
    return (0);
}
// int main(void)
// {
//     printf("%d\n", ft_strcmp("1", "2"));
//     printf("%d", strcmp("1", "2"));
// }