/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: snagulap <snagulap@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/21 15:05:55 by snagulap          #+#    #+#             */
/*   Updated: 2023/04/22 16:39:57 by snagulap         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft2/libft.h"
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int				ft_printf(const char *format, ...);
int				ft_print(va_list args, char format);
int				ft_printnumlen(unsigned int num);
char			*ft_uitoa(unsigned int num);
int				ft_print_uns(unsigned int num);
int				ft_printchar(char c);
int				ft_printstr(char *s);
int				count_hex_num(size_t num);
char			*hex_str(unsigned long num, char base);
int				ft_printhex(unsigned int num, char base);
int				ft_print_pointer(void *p);
int				ft_print_num(int num);

#endif
