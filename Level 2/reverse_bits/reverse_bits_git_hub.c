unsigned char	reverse_bits(unsigned char octet)
{
	int		i = 8;
	unsigned char	res = 0;

	while (i > 0)
	{
		res = res * 2 + (octet % 2);
		octet = octet / 2;
		i--;
	}
	return (res);
}

/*
	17 / 2 = 8    17 % 2 = 1
	8 / 2 = 4     8 % 2 = 0
	4 / 2 = 2     4 % 2 = 0
	2 / 2 = 1     2 % 2 = 0
	1 / 2 = 0     1 % 2 = 1
	the rest is 0's
	17 =        0001 0001
	reverse =   1000 1000
*/