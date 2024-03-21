/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sizeof.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 09:24:05 by azubieta          #+#    #+#             */
/*   Updated: 2024/03/14 09:44:44 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int  ft_sizeof(char *array)
{
    int size;

    size = 0;
    while(*array != '\0')
    {
        size++;
        array++;
    }
	while(*array == '\0')
	{
		size++;
		array++;
	}
    return (size);
}
#include <stdio.h>
int main(void)
{
	char	array[50] = "Hola";
	int 	i;

	i = ft_sizeof(array);
	printf("%d", i);
	i = sizeof(array);
    printf("%d", i);
	return (0);
}
