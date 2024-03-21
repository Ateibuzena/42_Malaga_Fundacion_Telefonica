#include <unistd.h>
#include <stdio.h>
#include <string.h>

//ex00
int main(void)
{
    char s1[4] = "Hola";
    char s2[3] = "Hol";
    char s3[4] = "Hola";
    char s4[3] = "Hol";
    int i;

    i = ft_strcmp(s1, s2);
    printf("%d", i);
    i = strcmp(s3, s4);
    printf("%s", "-----");
    printf("%d", i);
    return (0);
}

//ex01
int main(void)
{
    char s1[50] = "Hola que tal";
    char s2[10] = "Hola de rt";
    int i;

    i = ft_strncmp(s1, s2, 10);
    printf("%d", i);
    i = strncmp(s1, s2, 10);
    printf("%s", "-----");
    printf("%d", i);
    return (0);
}

//ex02
int main(void)
{
    char src[5] = "Hola";
    char dest[11]= "mamahuevo";
    char src_2[5] = "Hola";
    char dest_2[11]= "mamahuevo";

    ft_strcat(dest, src);
    printf("%s", dest);
    printf("%s", "----");
    
    strcat(dest_2, src_2);
    printf("%s", dest_2);
    return (0);
}

//ex03
int main(void)
{
    char src[5] = "Hola";
    char dest[11]= "mamahuevo";
    char src_2[5] = "Hola";
    char dest_2[11]= "mamahuevo";

    ft_strncat(dest, src, 1);
    printf("%s", dest);
    printf("%s", "----");

    strncat(dest_2, src_2, 1);
    printf("%s", dest_2);
    return (0);
}

//ex04
int main(void)
{
    char src[] = "wue";
    char dest[]= "Hola mamahuevo wue";
    char src_2[] = "wue";
    char dest_2[]= "Hola mamahuevo wue";

    //ft_strstr(dest, src);
    printf("%s", ft_strstr(dest, src));
    printf("%s", "----");

    //strstr(dest_2, src_2);
    printf("%s", ft_strstr(dest_2, src_2));
    return (0);
}

//ex05
int main(void)
{
    char src[] = "que";
    char dest[50]= "Hola mamahuevo wue";
    char src_2[] = "que";
    char dest_2[50]= "Hola mamahuevo wue";

    //ft_strstr(dest, src);
    printf("%u\n", ft_strlcat(dest, src, 50));
    //printf("%s", "----");

    //strstr(dest_2, src_2);
    printf("%zu", strlcat(dest_2, src_2, 50));
    return (0);
}
