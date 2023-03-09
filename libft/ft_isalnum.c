#include<stdio.h>


int ft_isalnum (unsigned char c)
{
    return (ft_isdigit(c) && ft_isalpha(c));
/*return ((c >= 'a' && c <='z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'));*/
}
int main(void)
{
    char c = '4';
    char c2 = 'a';
    char c3 = '_';
    char c4 = '{';
    char c5 = 'P';

    printf("%d\n", ft_isalnum(c));
    printf("%d\n", ft_isalnum(c2));
    printf("%d\n", ft_isalnum(c3));
    printf("%d\n", ft_isalnum(c4));
    printf("%d", ft_isalnum(c5));
    return (0);
}