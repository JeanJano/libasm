#include <stdio.h>
#include <string.h>

extern size_t ft_strlen(const char *);
extern char *ft_strcpy(char *dest, const char *src);
extern int ft_strcmp(const char *s1, const char *s2);

int main() {
    // // TEST STRLEN
    {
        // printf("\nTEST strlen\n");
        // printf("Hello, World! (%ld)\n", strlen("Hello, World!"));
        // printf(" (%ld)\n", strlen(""));
        // printf("foeurhotygrhgeghruy\nriueugy\n (%ld)\n", strlen("foeurhotygrhgeghruy\nriueugy\n"));
        // printf("\nTEST ft_strlen\n");
        // printf("Hello, World! (%ld)\n", ft_strlen("Hello, World!"));
        // printf(" (%ld)\n", ft_strlen(""));
        // printf("foeurhotygrhgeghruy\nriueugy\n (%ld)\n", ft_strlen("foeurhotygrhgeghruy\nriueugy\n"));
    };

    // // TEST STRCPY
    // {
    //     printf("\nTEST strcpy\n");
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
    //     printf("\nTEST ft_strcpy\n");
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

    // TEST STRCMP
    {
        printf("\nTEST strcmp\n");
        int test = strcmp("Hello, World!", "Hello, World!");
        printf("%d\n", test);
        test = strcmp("Hello, World!", "Hello, World");
        printf("%d\n", test);
        test = strcmp("Hello, World", "Hello, World!");
        printf("%d\n", test);
        test = strcmp("", "");
        printf("%d\n", test);
        test = strcmp("ewdo", "e");
        printf("%d\n", test);
    }
    {
        printf("\nTEST ft_strcmp\n");
        int test1 = ft_strcmp("Hello, World!", "Hello, World!");
        printf("%d\n", test1);
        test1 = ft_strcmp("Hello, World!", "Hello, World");
        printf("%d\n", test1);
        test1 = ft_strcmp("Hello, World", "Hello, World!");
        printf("%d\n", test1);
        test1 = strcmp("", "");
        printf("%d\n", test1);
        test1 = strcmp("ewdo", "e");
        printf("%d\n", test1);
    }
    return 0;
}