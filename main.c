#include <stdio.h>
#include <string.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include <unistd.h>

extern size_t ft_strlen(const char *);
extern char *ft_strcpy(char *dest, const char *src);
extern int ft_strcmp(const char *s1, const char *s2);
extern ssize_t ft_write(int fd, const void *buf, size_t count);
extern ssize_t ft_read(int fd, void *buf, size_t count);
extern char *ft_strdup(const char *s);

int main() {
    // // TEST STRLEN
    // {
    //     printf("TEST strlen\n");
    //     printf("Hello, World! (%ld)\n", strlen("Hello, World!"));
    //     printf(" (%ld)\n", strlen(""));
    //     printf("foeurhotygrhgeghruy\nriueugy\n (%ld)\n", strlen("foeurhotygrhgeghruy\nriueugy\n"));
    //     printf("\nTEST ft_strlen\n");
    //     printf("Hello, World! (%ld)\n", ft_strlen("Hello, World!"));
    //     printf(" (%ld)\n", ft_strlen(""));
    //     printf("foeurhotygrhgeghruy\nriueugy\n (%ld)\n", ft_strlen("foeurhotygrhgeghruy\nriueugy\n"));
    // };

    // // TEST STRCPY
    // {
    //     printf("TEST strcpy\n");
    //     char dest[100];
    //     char *test = strcpy(dest, "Hello, World!");
    //     printf("Hello, World! (%s)\n", test);
    //     char dest4[100];
    //     char *test1 = strcpy(dest4, "plus que 10");
    //     printf("plus que 10 (%s)\n", test1);
    //     printf("plus que 10 (%s)\n", dest4);
    //     strcpy(dest4, "c'est wefniufrueoe\n\n\n\\wrurg");
    //     printf("c'est wefniufrueoe\n\n\n\\wrurg (%s)\n", dest4);
    // };
    // {
    //     printf("TEST ft_strcpy\n");
    //     char dest[100];
    //     char *test = strcpy(dest, "Hello, World!");
    //     printf("Hello, World! (%s)\n", test);
    //     char dest4[100];
    //     char *test1 = ft_strcpy(dest4, "plus que 10");
    //     printf("plus que 10 (%s)\n", test1);
    //     printf("plus que 10 (%s)\n", dest4);
    //     ft_strcpy(dest4, "c'est wefniufrueoe\n\n\n\\wrurg");
    //     printf("c'est wefniufrueoe\n\n\n\\wrurg (%s)\n", dest4);
    // };

    // // TEST STRCMP
    // {
    //     printf("TEST strcmp\n");
    //     int test = strcmp("Hello, World!", "Hello, World!");
    //     printf("%d\n", test);
    //     test = strcmp("Hello, World!", "Hello, World");
    //     printf("%d\n", test);
    //     test = strcmp("Hello, World", "Hello, World!");
    //     printf("%d\n", test);
    //     test = strcmp("", "");
    //     printf("%d\n", test);
    //     test = strcmp("ewdo", "e");
    //     printf("%d\n", test);
    // }
    // {
    //     printf("TEST ft_strcmp\n");
    //     int test1 = ft_strcmp("Hello, World!", "Hello, World!");
    //     printf("%d\n", test1);
    //     test1 = ft_strcmp("Hello, World!", "Hello, World");
    //     printf("%d\n", test1);
    //     test1 = ft_strcmp("Hello, World", "Hello, World!");
    //     printf("%d\n", test1);
    //     test1 = strcmp("", "");
    //     printf("%d\n", test1);
    //     test1 = strcmp("ewdo", "e");
    //     printf("%d\n", test1);
    // }

    // // FT_WRITE
    {
        // printf("TEST ft_write\n");
        // int fd = open("test.txt", O_WRONLY | O_CREAT | O_TRUNC, 0644);
        // ssize_t test = ft_write(fd, "Hello, World!\n", 14);
        // printf("%ld", test);
        // ft_write(1, "Hello, World!\n", 14);

        // errno
        // printf("error test ft_write\n");
        // printf("Valid test:\n");
        // ft_write(1, "Hello, World!\n", 14);
        // printf("errno: %s\n", strerror(errno));
        // write(1, "Hello, World!\n\n", 14);
        // printf("errno: %s\n\n", strerror(errno));

        // printf("Invalid test:\n");
        // printf("invalid fd: -1\n");
        // ft_write(-1, "fd: -1\n", 8);
        // printf("errno: %s\n", strerror(errno));
        // write(-1, "fd: -1\n", 8);
        // printf("errno: %s\n\n", strerror(errno));

        // printf("invalid size: -1\n");
        // ft_write(1, "size: -1\n", -1);
        // printf("errno: %s\n", strerror(errno));
        // write(1, "size: -1\n", -1);
        // printf("errno: %s\n", strerror(errno));
    }

    // // FT_READ
    {
        // printf("TEST ft_read\n");
        // int fd = open("ft_strlen.s", O_RDONLY);
        // char buf[100];
        // ssize_t test = ft_read(fd, buf, 100);
        // printf("%ld\n", test);
        // printf("%s\n", buf);

        // // errno
        // printf("error test ft_read\n");
        // printf("Valid test:\n");
        // ft_read(fd, buf, 10);
        // printf("errno: %s\n", strerror(errno));
        // read(fd, buf, 10);
        // printf("errno: %s\n\n", strerror(errno));

        // printf("Invalid test:\n");
        // printf("invalid fd: -1\n");
        // ft_read(-1, buf, 10);
        // printf("errno: %s\n", strerror(errno));
        // read(-1, buf, 10);
        // printf("errno: %s\n\n", strerror(errno));

        // printf("invalid size: -1\n");
        // ft_read(fd, buf, -1);
        // printf("errno: %s\n", strerror(errno));
        // read(fd, buf, -1);
        // printf("errno: %s\n", strerror(errno));
    }

    // // FT_STRDUP
    {
        printf("TEST ft_strdup\n");
        char *dup;
        dup = strdup("wdewwe");
        printf("\nbase: %s\n", dup);

        char *dup1;
        dup1 = ft_strdup("wdewwe");
        printf("test: %s|\n\n", dup1);
    }
    return 0;
}