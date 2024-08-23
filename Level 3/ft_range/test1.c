#include <stdlib.h>
#include <stdio.h>

int ft_abs(int n)
{
    if (n < 0)
        return -n;
    else
        return n;
}

int *ft_range(int start, int end)
{
	int i = 0;
	int len = ft_abs((end - start)) + 1;
	int *res = (int *)malloc(sizeof(int) * len);
	
	while (i < len)
	{
		if (start < end)
		{
			res[i] = start;
			start++;
			i++;
		}
		else
		{
			res[i] = start;
			start--;
			i++;
		}
	}
    return (res);
}

// int main(void)
// {
//     int *n = ft_range(1, 3);
//     printf("%d\n", n[0]);
//     printf("%d\n", n[1]);
//     printf("%d\n", n[2]);
// }