#include <unistd.h>
#include <stdio.h>

//ex00
int main(void)
{
	int n;


	n = 0;
    printf("%d", n);
	ft_ft(&n);
    printf("%d", n);
	return (0);
}

//ex01
int main(void)
{
    int variable = 0;
    int *uno = &variable;
    int **dos = &uno;
    int ***tres = &dos;
    int ****cuatro = &tres;
    int *****cinco = &cuatro;
    int ******seis = &cinco;
    int *******siete = &seis;
    int ********ocho = &siete;
    int *********nueve = &ocho;

    ft_ultimate_ft(nueve);
    return (0);
}

//ex02
int main(void)
{
    int a;
    int b;
    char c;

    a = 0;
    b = 5;
    c = a + 48;
    write(1, &c, 1);
    c = b + 48;
    write(1, &c, 1);
    ft_swap(&a, &b);
    c = a + 48;
    write(1, &c, 1);
    c = b + 48;
    write(1, &c, 1);
	return (0);
}

//ex03
int main(void)
{
    int a = 13;
    int b = 2;
    int *cociente = &a;
    int *resto = &b;

    ft_div_mod(a, b, cociente, resto);
    printf("cociente: %d", *cociente);
    printf("resto: %d", *resto);
    return (0);
}

//ex04
int main(void)
{
    int a = 10;
    int b = 3;
    ft_ultimate_div_mod(a, b);
    printf("cociente: %d", a);
    printf("resto: %d", b);
    return (0);
}

//ex05
int main(void)
{
    ft_putstr("hello world");
	return (0);
}

//ex06
int main(void)
{
    char *str;
    int len;

    str = "hola mundo";
    len = ft_strlen(str);
    printf("This is the len: %d", len);
    return (0);
}

//ex07
int main(void)
{
    int array[5] = {1, 2, 3, 4, 5};
    ft_rev_int_tab(array, 5);
    int i = 0;
    while (i < 5)
    {
        printf("%d", array[i]);
        i++;
    }
    return (0);
}
