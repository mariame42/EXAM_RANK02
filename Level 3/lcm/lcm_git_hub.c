unsigned int lcm(unsigned int a, unsigned int b)
{
	unsigned int n;	

	if (a == 0 || b == 0)
		return (0);
	if (a > b)
		n = a;
	else
		n = b;
	while (1)
	{
		if (n % a == 0 && n % b == 0)
			return (n);
		++n;
	}
}

/*
	a = 12  &  b = 8    n = the bigger between a & b = 12 
	12 % 12 = 0   12 % 8 = 4
	n = 13
	13 % 12 = 1   13 % 8 = 5
	n = 14
	14 % 12 = 2   14 % 8 = 6
	n = 15
	15 % 12 = 3   15 % 8 = 7
	n = 16
	16 % 12 = 4   16 % 8 = 0
	n = 17
	17 % 12 = 5   17 % 8 = 1
	n = 18
	18 % 12 = 6   18 % 8 = 2
	n = 19
	19 % 12 = 7   19 % 8 = 3
	n = 20
	20 % 12 = 8   20 % 8 = 4
	n = 21
	21 % 12 = 9   21 % 8 = 5
	n = 22
	22 % 12 = 10  22 % 8 = 6
	n = 23
	23 % 12 = 11  23 % 8 = 7
	n = 24
	24 % 12 = 0   24 % 8 = 0
*/
