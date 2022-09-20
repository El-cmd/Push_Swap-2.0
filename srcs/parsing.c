#include "../includes/push_swap.h"

bool    lst_comp(t_list *head, int nbr)
{
    if (!head)
    return (true);

    while (head->next != NULL)
    {
        if (head->content == nbr)
            return (false);
        head = head->next;
    }
    return (true);
}


void    initstack_a(t_list **head, char **argv)
{
    size_t  i;
    int nbr;
    t_list  *lst;

    i = 0;
    argv = 1;
    lst = *head;
    while(*argv != NULL)
    {
        nbr = check_arg(*argv++);
        lst->content = nbr;
        if (!lst_comp(*head, nbr))
            ft_putstr("Error\n");
        if (!*argv != NULL)
            lst->next = lst_new(0);
        lst = lst->next;
    }
}