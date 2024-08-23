void	ft_swap(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

// #include <stdio.h>
// int main(void)
// {
//     int i = 1;
//     int j = 5;
//     ft_swap(&i, &j);
//     printf("%d, %d", i, j);
// }
