/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kbeceren <kbeceren@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/08 19:51:57 by kbeceren          #+#    #+#             */
/*   Updated: 2022/08/09 20:40:10 by kbeceren         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *format, ...)
{
	// Declaring pointer to the
   	// argument list
	va_list	args;
	int		i;
	int		count;

	i = 0;
	count = 0;
	// Initializing argument to the
    	// list pointer
	va_start(args, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			// Accessing current variable
        		// and pointing to next one
			count += ft_formats(args, format[i + 1]);
			i++;
		}
		else
			count += ft_putchar(format[i]);
		i++;
	}
	// Ending argument list traversal
	va_end(args);
	return (count);
}