#include <stdio.h>
#include <string.h>

extern size_t ft_strlen(const char *);

int main() {
    // TEST STRLEN
    printf("\nTEST strlen\n");
    printf("Hello, World! (%ld)\n", strlen("Hello, World!"));
    printf(" (%ld)\n", strlen(""));
    printf("foeurhotygrhgeghruy\nriueugy\n (%ld)\n", strlen("foeurhotygrhgeghruy\nriueugy\n"));
    printf("\nTEST ft_strlen\n");
    printf("Hello, World! (%ld)\n", ft_strlen("Hello, World!"));
    printf(" (%ld)\n", ft_strlen(""));
    printf("foeurhotygrhgeghruy\nriueugy\n (%ld)\n", ft_strlen("foeurhotygrhgeghruy\nriueugy\n"));
    return 0;
}