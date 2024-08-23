#include <stdlib.h>
#include <stdio.h>
/*
"It is okay if you did not free the memory that you allocated in this exam (I did that in mine) //
 pass the Moulinette, tryed 2024.08.22."
*/
char    **ft_split(char *str)
{
    char **split = malloc(1024);
    int i = 0;
    int j = 0;
    int k = 0;
    char *word;
    while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
        i++;
    while (str[i])
    {
        split[j] = malloc(1024);
        word = split[j];
		k = 0;
        while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
            word[k++] = str[i++];
        while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
            i++;
        word[k] = '\0';
        j++;
    }
	split[j] = NULL;
    return (split);
}

// int main(void)
// {
//     char **split = ft_split("   hi i think   i am   mariam ");
// 	printf("%s\n", split[0]);
// 	printf("%s\n", split[1]);
// 	printf("%s\n", split[2]);
// 	printf("%s\n", split[3]);
// 	printf("%s\n", split[4]);
// 	printf("%s\n", split[5]);
// }