#include <stdlib.h>
#include <stdio.h>

int ft_abs(int nb)
{
    if (nb < 0)
        return (-nb);
    else
        return (nb);
}

int     *ft_rrange(int start, int end)
{
    int len = ft_abs(end - start) + 1;
    int i = 0;
    int *result = malloc(sizeof(int) * len);
    while (i < len)
    {
        if (start < end)
        {
            result[i] = end;
            end--;
        }
        else
        {
            result[i] = end;
            end++;
        }
        i++;
    }
    return (result);

}

// int main(void)
// {
//     int *res = ft_rrange(-1, 2);
//     printf("%d\n", res[0]);
//     printf("%d\n", res[1]);
//     printf("%d\n", res[2]);
//     printf("%d\n", res[3]);
// }