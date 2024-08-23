
#include <unistd.h>

void putnum(int i)
{
    if (i > 9)
        putnum(i / 10);
    write(1, &"0123456789"[i % 10], 1);
}

int main(int ac, char **av)
{
    (void)av;
    putnum(ac - 1);
    write(1, "\n", 1);
}