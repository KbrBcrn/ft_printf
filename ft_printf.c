/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbeceren <kubraabeceren>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/10 16:17:53 by kbeceren          #+#    #+#             */
/*   Updated: 2022/08/10 23:01:47 by kbeceren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_formats(va_list args, const char format)
{
	int	count;

	count = 0;
	if (format == 'c')
		count += ft_putchar(va_arg(args, int));
	else if (format == 's')
		count += ft_printstr(va_arg(args, char *));
	else if (format == 'p')
		count += ft_printptr(va_arg(args, unsigned long long));
	else if (format == 'd' || format == 'i')
		count += ft_printnbr(va_arg(args, int));
	else if (format == 'u')
		count += ft_print_unsigned(va_arg(args, unsigned int));
	else if (format == 'x' || format == 'X')
		count += ft_print_hexa(va_arg(args, unsigned int), format);
	else if (format == '%')
		count += ft_putchar('%');
	return (count);
}

int	ft_printf(const char *str, ...)
{
	// Declaring pointer to the
   	// argument list
	va_list	args;
	int		count;
	int		i;

	// Initializing argument to the
    // list pointer
	va_start(args, str);
	count = 0;
	i = 0;
	while (str && str[i])
	{
		if (str[i] == '%')
		{
			// Accessing current variable
        	// and pointing to next one
			count += ft_formats(args, str[i + 1]);
			i++;
		}
		else
			count += ft_putchar(str[i]);
		i++;
	}
	// Ending argument list traversal
	va_end(args);
	return (count);
}
