#include "libasm.h"

int main() {
    t_list *list = malloc(sizeof(t_list));
    list->data = (void*)5;

    t_list *list2 = malloc(sizeof(t_list));
    list2->data = (void*)6;

    t_list *list3 = malloc(sizeof(t_list));
    list3->data = (void*)7;

    list->next = list2;
    list2->next = list3;

    // // TEST list_size
    {
        // int i = ft_list_size(list);
        printf("%d\n", ft_list_size(list));
    }
}