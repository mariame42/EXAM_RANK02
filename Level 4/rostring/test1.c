#include <unistd.h>

int main(int ac, char **av)
{
    if (ac > 1)
    {
        int i = 0;
        int j = 1;
        while (ac > 1)// 4 > 0 true
        {
            while (av[j][i] && (av[j][i] == ' ' || av[j][i] == '\t'))
                i++;
            int start = i;
            while (av[j][i] && (av[j][i] != ' ' && av[j][i] != '\t'))
                i++;
            int end = i - 1;
            while (av[j][i] && (av[j][i] == ' ' || av[j][i] == '\t'))
                i++;
            while (av[j][i])
            {
                while (av[j][i] && (av[j][i] == ' ' || av[j][i] == '\t'))
                    i++;
                while (av[j][i] && (av[j][i] != ' ' && av[j][i] != '\t'))
                {
                    write(1, &av[j][i], 1);
                    i++;
                }
                write(1, " ", 1);
            }
            while (start <= end)
            {
                write(1, &av[j][start], 1);
                start++;
            }
            i = 0;
            j++;
            ac--;
        }
    }
    write(1, "\n", 1);
}