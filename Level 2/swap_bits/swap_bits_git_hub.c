unsigned char swap_bits(unsigned char octet)
{
	return ((octet >> 4) | (octet << 4));
}

/*
	0100 0001
	octet >> 4 = 
	0000 0100
	octet << 4 =
	0001 0000

	0000 0100 | 0001 0000
	| (OR) bitwise oprator if one or both is one return 1
	so how is that work
	0000 0100
	    |
	0001 0000
	    =
	0001 0100  
*/