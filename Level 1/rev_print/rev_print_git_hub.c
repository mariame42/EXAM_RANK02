#include <unistd.h>

char *rev_print(char *str)
{
	int	i = 0;

	while (str[i])
		i++;
	while (--i > 0)
		write(1, &str[i], 1);
	if (str[0])
		write(1, &str[0], 1);
	return (str);
}
