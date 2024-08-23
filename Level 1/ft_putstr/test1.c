#include <unistd.h>
void	ft_putstr(char *str)
{
    int i = 0;
    while (str[i])
    {
        write(1, &str[i], 1);
        i++;
    }
}

// int main(void)
// {
//     char *str = "I am a string";
//     ft_putstr(str);
// }