#include <unistd.h>
void	print_bits(unsigned char octet)
{
    int i = 7;
    while (i >= 0)
    {
        if ((octet >> i & 1) == 0)
            write(1, "0", 1);
        else if ((octet >> i & 1) == 1)
            write(1, "1", 1);
        i--;
    }
}

/*
    bitwise operator:     >>    right shift
    octec = 19
    0000 1011
    firs step   octec >> 7 & 1
    0000 0000  &
    0000 0001  =
        0
    next octec >> 6 & 1
    0000 0000  &
    0000 0001  =
        0
    next octec >> 5 & 1
    0000 0000  &
    0000 0001  =
        0
    next octec >> 4 & 1
    0000 0000  &
    0000 0001  =
        0
    next octec >> 3 & 1
    0000 0001  &
    0000 0001  =
        1
    next octec >> 2 & 1
    0000 0010  &
    0000 0001  =
        0
    next octec >> 1 & 1
    0000 0101  &
    0000 0001  =
        1
    next octec >> 0 & 1
    0000 1011  &
    0000 0001  =
        1
*/