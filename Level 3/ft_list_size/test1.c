// typedef struct    s_list
// {
//     struct s_list *next;
//     void          *data;
// }                 t_list;

int	ft_list_size(t_list *begin_list)
{
    int counter = 0;
    while (begin_list)
    {
        counter++;
        begin_list = begin_list->next;
    }
    return (counter);
}
// #include <stdlib.h>

// t_list *create_node(void *data)
// {
//     t_list *node = malloc(sizeof(t_list));
//     node->data = data;
//     node->next = NULL;
//     return (node);
// }

// #include <stdio.h>

// int main(void)
// {
//     t_list *node = create_node("data1");
//     node->next = create_node("data2");
//     node->next->next = create_node("data3");

//     int size = ft_list_size(node);
//     printf("%d", size);

// }
