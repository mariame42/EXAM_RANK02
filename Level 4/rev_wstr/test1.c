#include <unistd.h>
#include <stdlib.h>

/*"I don't like to use flags for some reason, so I did it like this."*/

int main(int ac, char **av)
{
    if (ac == 2)
    {
        int i = 0;
        while (av[1][i])
            i++;
        i--;
        while(i >= 0)
        {
            if (av[1][i] == ' ' || av[1][i] == '\t')
                i--;
            int end = i;
            if (av[1][i] != ' ' && av[1][i] != '\t')
                i--;
            int start = i + 1;
            while (start <= end)
            {
                write(1, &av[1][start], 1);
                start++;
            }
            if (i >= 0)
                write(1, " ", 1);
        }
    }
    write(1, "\n", 1);
}