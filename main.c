#include <stdio.h>
#include <string.h>

extern size_t ft_strlen(const char *);
extern char *ft_strcpy(char *dest, const char *src);

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

    // TEST STRCPY
    {
        printf("\nTEST strcpy\n");
        char dest[100];
        char *test = strcpy(dest, "Hello, World!");
        printf("Hello, World! (%s)\n", test);
        char dest4[100];
        char *test1 = strcpy(dest4, "plus que 10");
        printf("plus que 10 (%s)\n", test1);
        printf("plus que 10 (%s)\n", dest4);
        strcpy(dest4, "c'est wefniufrueoe\n\n\n\\wrurg");
        printf("c'est wefniufrueoe\n\n\n\\wrurg (%s)\n", dest4);
    };
    {
        printf("\nTEST ft_strcpy\n");
        char dest[100];
        char *test = strcpy(dest, "Hello, World!");
        printf("Hello, World! (%s)\n", test);
        char dest4[100];
        char *test1 = ft_strcpy(dest4, "plus que 10");
        printf("plus que 10 (%s)\n", test1);
        printf("plus que 10 (%s)\n", dest4);
        ft_strcpy(dest4, "c'est wefniufrueoe\n\n\n\\wrurg");
        printf("c'est wefniufrueoe\n\n\n\\wrurg (%s)\n", dest4);
    };
    return 0;
}