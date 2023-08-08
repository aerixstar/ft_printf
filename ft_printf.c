/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aheng <aheng@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/04 18:59:25 by aheng             #+#    #+#             */
/*   Updated: 2023/08/08 20:45:06 by aheng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

char *str = "world";

printf("hello %s\n", str);


int	ft_printf(const char *str, ...)
{
	va_list	lst;
	int 	count;
	
	va_start(lst, str);
	while (*str)
	{
		if (*str == '%')
		{
			str++;
			check_char(*str, lst, counter)
		}
			;
		else
			write(1, str, 1);
		str++;
	}
	
	return (count);
}