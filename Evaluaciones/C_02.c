#include <unistd.h>
#include <stdio.h>
#include <stdlib>
#include <string.h>

//ex00
int main(void)
{
    char    str[] = "hello";
    char    dst[20];
    int i;

    i = 0;
    ft_strcpy(dst, str);
    while (i <= 20)
    {
        write(1, &dst[i], 1);
        i++;
    }
    return (0);
}

int main(void)
{
    char origen[] = "Hola, mundo!";
    char destino[] = "hola que tal como estas";

    ft_strcpy(destino, origen);
    printf("Cadena origen: %s\n", origen);
    printf("Cadena destino: %s\n", destino);
    printf("Contenido en la posición 15: %c\n", destino[14]);
    return (0);
}

{
    char    str[] = "Hello";
    char    dst[50] = "Hola mamahuevo";
    int     i;

    i = 0;
    ft_strcpy(dst, str);
    while (dst[i] != '\0')
    {
        write(1, &dst[i], 1);
        i++;
    }
    write(1, "----", 4);
    i = 0;
    strcpy(dst, str);
    while (dst[i] != '\0')
    {
        write(1, &dst[i], 1);
        i++;
    }
}

//ex01
int main(void)
{
    char    str[] = "Hello";
    char    dst[50] = "Hola mamahuevo";
    int     i;

    i = 0;
    ft_strncpy(dst, str, 3);
    while (dst[i] != '\0')
    {
        write(1, &dst[i], 1);
        i++;
    }
    write(1, "----", 4);
    i = 0;
    strncpy(dst, str, 3);
    while (dst[i] != '\0')
    {
        write(1, &dst[i], 1);
        i++;
    }
}

//ex02
int main(void)
{
    int n;

    n = ft_str_is_alpha("");
    printf("%d", n);
    n = ft_str_is_alpha("hola");
    printf("%d", n);
    n = ft_str_is_alpha("3h");
    printf("%d", n);
    return (0);
}

//ex03
int main(void)
{
    int n;

    n = ft_str_is_numeric("kjdf");
    printf("%d", n);
    return (0);
}

//ex04
int main(void)
{
    int n;

    n = ft_str_is_lowercase("whatsappp");
    printf("%d", n);
    return (0);
}

//ex05
int main(void)
{
    int n;
    n = ft_str_is_lowercase("holiholi");
    printf("%d", n);
    return (0);
}

//ex06
int main(void)
{
    int n;

    n = ft_str_is_printable("holaholahola");
    printf("%d", n);
    return (0);
}

//ex07
int main(void)
{
    char str[] = "Hola mundo";
    char src[] = "12";
    char pollon[] = "12deDre";

    ft_strupcase(str);
    printf("%s", str);
    ft_strupcase(src);
    printf("%s", src);
    ft_strupcase(pollon);
    printf("%s", pollon);
    return (0);
}

//ex08
int main(void)
{
    char str[] = "Hola mundo";
    char src[] = "12";
    char pollon[] = "12deDre";

    ft_strupcase(str);
    printf("%s", str);
    ft_strupcase(src);
    printf("%s", src);
    ft_strupcase(pollon);
    printf("%s", pollon);
    return (0);
}

//ex09
int main(void)
{
    char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    char str_1[] = "HOLA COMO ESTAS &/ DSKJ %FJJ";

    ft_strcapitalize(str);
    printf("%s", str);
    ft_strcapitalize(str_1);
    printf("%s", "----");
    printf("%s", str_1);
    return (0);
}
