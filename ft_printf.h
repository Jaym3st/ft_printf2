/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaisanch <jaisanch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 15:55:24 by jaisanch          #+#    #+#             */
/*   Updated: 2023/06/28 17:12:21 by jaisanch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdlib.h>
# include <stdarg.h>
# include <unistd.h>

int	ft_printf(char const *str, ...);
int	ft_printf_ptr(unsigned long long ptr);
int	ft_printf_nbr(int nb);
int	ft_printstr(char *str);
int	ft_printf_unsigned(unsigned int nb);
int	ft_printf_hexa(unsigned int nb, char format);
int	ft_ptrlen(size_t ptr);
int	ft_putchar(char c);

#endif