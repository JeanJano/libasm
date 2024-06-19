#include "libasm.h"

void print_list(t_list *list) {
    t_list *tmp = list;
    while (tmp)
    {
        printf("%s ", tmp->data);
        tmp = tmp->next;
    }
    printf("\n");
}

void free_list(t_list *list) {
    t_list *tmp;
    while (list)
    {
        tmp = list;
        list = list->next;
        free(tmp);
    }
}

int main() {
    t_list *list = NULL;
    ft_list_push_front(&list, (void *)"yoyoyo");
    ft_list_push_front(&list, (void *)"yoyoyo");
    ft_list_push_front(&list, (void *)"yoyoyo");
    print_list(list);

    printf("%d\n", ft_list_size(list));

    free_list(list);
}