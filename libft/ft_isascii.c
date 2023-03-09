#include<stdio.h>

int ft_isascii (char c)
{
    return (c >= 0 && c <= 127);
}

int main(void)
{
    char c = '4';
    char c2 = 'a';
    char c3 = '_';
    char c4 = '{';
    char c5 = 'P';
    char c6 = -1;

    printf("%d\n", ft_isascii(c));
    printf("%d\n", ft_isascii(c2));
    printf("%d\n", ft_isascii(c3));
    printf("%d\n", ft_isascii(c4));
    printf("%d", ft_isascii(c5));
    printf("%d", ft_isascii(c6));
    return (0);
}