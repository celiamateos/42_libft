#include<stdio.h>

int ft_isdigit (unsigned char c)
{
return (c >= '0' && c <= '9');
}
int main(void)
{
    char c = '4';
    char c2 = '2';

    printf("%d\n", ft_isdigit(c));
    printf("%d", ft_isdigit(c2));
    return (0);
}