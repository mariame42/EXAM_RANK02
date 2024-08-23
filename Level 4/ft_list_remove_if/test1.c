#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>


// typedef struct      s_list
// {
//     struct s_list   *next;
//     void            *data;
// }               t_list;

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    if (begin_list == NULL || *begin_list == NULL)
		return;
    t_list *cur = *begin_list;
    if (cmp(cur->data, data_ref) == 0)
    {
        *begin_list = cur->next;
        free(cur);
        ft_list_remove_if(begin_list, data_ref, cmp);
    }
    else
        ft_list_remove_if(&cur->next, data_ref, cmp);
}

// int ft_function(void *n, void *m)
// {
//     if (n == m)
//         return (0);
//     else
//         return (1);
// }
// t_list *lstnew(void *content)
// {
//     t_list *node = malloc(sizeof(t_list));
//     node->data = content;
//     node->next = NULL;
//     return (node);
// }

// int main(void)
// {
//     t_list *node = lstnew("1");
//     node->next = lstnew("2");
//     node->next->next = lstnew("3");

//     ft_list_remove_if(&node, "2", ft_function);
//     t_list *tmp = node;
//     while (tmp)
//     {
//         printf("%s\n", (char *)tmp->data);
//         tmp = tmp->next;
//     }

// }