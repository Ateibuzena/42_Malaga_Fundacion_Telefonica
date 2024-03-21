/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: azubieta <azubieta@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 15:24:13 by azubieta          #+#    #+#             */
/*   Updated: 2024/03/21 13:14:22 by azubieta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Start file
#ifndef FT_H
# define FT_H

//Libraries
# include <unistd.h>
# include <stdio.h>
# include <fcntl.h>
# include <stdlib.h>

//Call funtion
void	ft_arguments(char **argv, int i);
void	ft_putstr(char *buffer);
int		ft_strlen_argv(char **argv, int n);
int		ft_count_size(char *buffer);
char	*ft_read_file(char **argv, int x, char *buffer);
void	ft_cols_rows(char *buffer, int *cols, int *rows, int *current_cols);
int		ft_strlen(char	*str);
int		ft_cols(char *buffer);
char	*ft_strcpy(char *dest, char *src);
char	*ft_memory_error_char(char *array);
int		*ft_memory_error_int(int *array);
int		*ft_check(char *buffer, int *array);

//End file
#endif
