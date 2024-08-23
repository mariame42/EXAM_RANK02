#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av)
{
    if (ac == 4)
    {
        int arg1 = atoi(av[1]);
        int arg2 = atoi(av[3]);
        if (av[2][0] == '*' && av[2][1] == '\0')
            printf("%d", arg1 * arg2);
        else if (av[2][0] == '/' && av[2][1] == '\0')
            printf("%d", arg1 / arg2); 
        else if (av[2][0] == '+' && av[2][1] == '\0')
            printf("%d", arg1 + arg2); 
        else if (av[2][0] == '-' && av[2][1] == '\0')
            printf("%d", arg1 - arg2);
        else if (av[2][0] == '%' && av[2][1] == '\0')
            printf("%d", arg1 % arg2);
    }
    printf("\n");
}