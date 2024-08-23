#include <unistd.h>
//erroe
int main(int ac, char **av)
{
    int i = 0;
    int j = 1;
    if (ac == 1)
        write(1, "\n", 1);
    while (ac != 1)
    {
        while (av[j][i])
        {
            if (av[j][i] >= 'A' && av[j][i] <= 'Z')
                av[j][i] += 32;
            if ((av[j][i] != ' ' || av[j][i] != '\t') && (av[j][i - 1] == '\t' || av[j][i - 1] == ' ' || av[j][i - 1] == '\0'))
                av[i][j] -= 32;
            write(1, &av[j][i], 1);
            i++;
        }
        write(1, "\n", 1);
        j++;
        ac--;
        i = 0;
    }
}