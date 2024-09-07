#include <unistd.h>

int main(int ac, char **av)
{
    int i = 0;
    int j = 1;
    if (ac == 1)
        write(1, "\n", 1);
    while(ac != 1)
    {
        while(av[j][i])
        {
            if ((av[j][i] >= 'A' && av[j][i] <= 'Z'))
                av[j][i] += 32;
            i++;
        }
        i = 0;
        while (av[j][i])
        {
            while (av[j][i] == ' ' || av[j][i] == '\t')
            {
                write(1, &av[j][i], 1);
                i++;
            }
            if ((av[j][i] != ' ' || av[j][i] != '\t') && (av[j][i + 1] == ' ' || av[j][i + 1] == '\t' || av[j][i + 1] == '\0') && (av[j][i] >= 'a' && av[j][i] <= 'z'))
                av[j][i] -= 32;
            write(1, &av[j][i], 1);
            i++;
        }
        write(1, "\n", 1);
        i = 0;
        j++;
        ac--;
    }
}
