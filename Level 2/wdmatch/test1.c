#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    int j = 0;
    if (ac == 3)
    {
        while (av[2][i])
        {
            if (av[2][i] == av[1][j])
                j++;
            i++;
        }
        if (av[1][j] == '\0')
        {
            j = 0;
            while (av[1][j])
            {
                write(1, &av[1][j], 1);
                j++;
            }
        }
    }
    write(1, "\n", 1);
}