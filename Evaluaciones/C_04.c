#include <stdio.h>

//ex00
int main(void)
{
    char    *str;
    int     len;

    str = "hola mundo";
    len = ft_strlen(str);
    printf("%d", len);
    return (0);
}

//ex01
int main(void)
{
    char    *str;

    str = "hola mundo";
    ft_putstr(str);
    return (0);
}

//ex02
int main(void)
{
    long    i;
    int     n;

    i = 2133347483648;
    ft_putnbr(i);
    printf("%c", '\n');
    n = ft_ndigit(123);
    printf("%d", n);
    return (0);
}

//ex03
int main(void)
{
    char    *str;
    int     n;

    n = 0;
    str = "-1234ab567";
    n = ft_atoi(str);
    printf("%d", n);
    return (0);
}

