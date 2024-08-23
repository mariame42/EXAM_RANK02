#include <stdio.h>
#include <stdlib.h>

// typedef struct s_list
// {
//     int             content;
//     struct s_list   *next;
// }                   t_list;

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    t_list *start = lst;
    int tmp;
    while (lst && lst->next)
    {
        if ((*cmp)(lst->content, lst->next->content) == 0)
        {
            tmp = lst->content;
            lst->content = lst->next->content;
            lst->next->content = tmp;
            lst = start;
        }
        else
            lst = lst->next;
    }
    return (start);
}

// int ascending(int a, int b)
// {
// 	return (a <= b);
// }

// t_list *lstnew(int content)
// {
//     t_list *node = malloc(sizeof(t_list));
//     node->content = content;
//     node->next = NULL;
//     return (node);
// }

// int main(void)
// {
//     t_list *node = lstnew(1);
//     node->next = lstnew(8);
//     node->next->next = lstnew(3);

//     node = sort_list(node, ascending);
//     t_list *tmp = node;
//     while (tmp)
//     {
//         printf("%d\n", tmp->content);
//         tmp = tmp->next;
//     }
// }
