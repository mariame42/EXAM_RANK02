#include <unistd.h>

int main(int ac, char **av)
{
    if (ac > 1)
    {
        int i = 0;
        if (ac > 1)// 4 > 0 true
        {
            while (av[1][i] && (av[1][i] == ' ' || av[1][i] == '\t'))
                i++;
            int start = i;
            while (av[1][i] && (av[1][i] != ' ' && av[1][i] != '\t'))
                i++;
            int end = i - 1;
            while (av[1][i] && (av[1][i] == ' ' || av[1][i] == '\t'))
                i++;
            while (av[1][i])
            {
                while (av[1][i] && (av[1][i] == ' ' || av[1][i] == '\t'))
                    i++;
                while (av[1][i] && (av[1][i] != ' ' && av[1][i] != '\t'))
                {
                    write(1, &av[1][i], 1);
                    i++;
                }
                write(1, " ", 1);
            }
            while (start <= end)
            {
                write(1, &av[1][start], 1);
                start++;
            }
        }
    }
    write(1, "\n", 1);
}