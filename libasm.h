typedef struct s_list
{
    void *data;
    struct s_list *next;
} t_list;

#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>
#include <stdlib.h>

extern size_t ft_strlen(const char *);
extern char *ft_strcpy(char *dest, const char *src);
extern int ft_strcmp(const char *s1, const char *s2);
extern ssize_t ft_write(int fd, const void *buf, size_t count);
extern ssize_t ft_read(int fd, void *buf, size_t count);
extern char *ft_strdup(const char *s);

extern int ft_list_size(t_list *begin_list);
extern void ft_list_push_front(t_list **begin_list, void *data);