/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/09 19:08:41 by azubieta          #+#    #+#             */
/*   Updated: 2024/03/10 18:51:01 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 4 			//size = 4

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	x = 0;
	while (src[x] != '\0' && x < n)
	{
		dest[x] = src[x];
		++x;
	}
	while (x < n)
	{
		dest[x] = '\0';
		++x;
	}
	return (dest);
}

void split_string(char *str, char parts[4][SIZE]) 
{
    int i;

	i = 0;
    while (i < 4) 
	{
        ft_strncpy(parts[i], str + i * SIZE, SIZE);
        i++;
    }
}

int	is_good(int matrix[SIZE][SIZE], int row, int col, int n)
{
	//Look if n is in the same row o col (sudoku rules)
	int	i;

	i = 0;
	while (i < SIZE)
	{
		if (matrix[row][i] == n || matrix[i][col] == n)
			return (0); //No valid
		i++;
	}
	return (1); //Valid
}

void	memory_free(char *parts[4]) 
{
    int	i;

	i = 0;
    while (i < 4) 
	{
        free(parts[i]);
        i++;
    }
}

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	return (count);
}

void	ft_putchar(char c) 
{
    write(1, &c, 1);
}

/*void	matrix_calculator(char *str,int matrix[SIZE][SIZE])
{
	//split string y 4 parts
	char	array[4][SIZE];
	int	i;
	int j;
	int a;

	i = 0;
	split_string(str, array);

	//Matrix values
	while (i < SIZE)
	{
		j = 0;
		while (j < SIZE)
		{	
			//Take a caracter of the array
			//Map in a range of [0, 1, 2, 3] --> [i / 2]
			//Map i to cols of array spliting two elements --> i % 2 * 2
			//For each i value map in a range of [0, 1, 2, ..., SIZE/2-1]
			//Convert array to int.
			a = array[i / 2][i % 2 * 2 + j / 2] - '0';
			while (!is_good(matrix, i, j, a))
			{
                a--;
				if (a < 1)
				{
					write(1, "No string valid", 15);
					return;
				}
			}		
			matrix[i][j] = a;
			j++;
		}
		i++;
	}
}*/

void matrix_calculator(char *str, int matrix[SIZE][SIZE]) {
  char array[4][SIZE];
  int i, j, k, n;

  // Dividir la cadena en partes
  split_string(str, array);

  // Inicializar la matriz con ceros
  i = 0;
  while (i < SIZE) {
    j = 0;
    while (j < SIZE) {
      matrix[i][j] = 0;
      j++;
    }
    i++;
  }

  // Llenar la matriz según las restricciones de visibilidad
  i = 0;
  while (i < SIZE) {
    j = 0;
    while (j < SIZE) {
      n = array[i / 2][i % 2 * 2 + j / 2] - '0';
      k = 0;
      while (!is_good(matrix, i, j, n) && k < n) {
        k++;
      }
      if (k == n) {
        write(1, "No string valid", 15);
        return;
      }
      matrix[i][j] = n;
      j++;
    }
    i++;
  }
}

void print_matrix(int matrix[SIZE][SIZE]) {
    int i = 0;
    while (i < SIZE) {
        int j = 0;
        while (j < SIZE) {
            ft_putchar(matrix[i][j] + '0'); // Convertir el número a su representación de carácter
            ft_putchar(' '); // Imprimir un espacio entre cada número
            j++;
        }
        ft_putchar('\n'); // Imprimir una nueva línea después de cada fila
        i++;
    }
}

int main(int argc, char *argv[])
{
	char *str;
	int	A[SIZE][SIZE];

	if (argc != 2)
	{
		write(1, "Put a string", 12);
		return (1);
	}
	str = argv[1];
	if (ft_strlen(str) != 16)
	{
		write(1, "No string valid", 15);
		return (1);
	}
	matrix_calculator(str, A);
	print_matrix(A);
	return (0);
}
