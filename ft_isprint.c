#include<stdio.h>

int ft_isprint (unsigned char c)
{
    return ((c >= 32) && (c <= 126));
}

int main(void)
{
    char c = 'a';
    printf("%d", ft_isprint(c));
}