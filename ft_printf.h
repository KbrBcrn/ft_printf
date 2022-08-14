/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbeceren <kbeceren@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 12:46:10 by kbeceren          #+#    #+#             */
/*   Updated: 2022/08/14 12:46:11 by kbeceren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *format, ...);
int		ft_print_hexa(unsigned int nb, const char format);
int		ft_print_unsigned(unsigned int nb);
int		ft_printnbr(int nbr);
int		ft_printstr(const char *s1);
int		ft_printptr(unsigned long nb);
int		ft_putchar(char c);
char	*ft_itoa(int n);

#endif
