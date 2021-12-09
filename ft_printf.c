/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourkan <hbourkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 21:37:41 by hbourkan          #+#    #+#             */
/*   Updated: 2021/12/09 10:11:27 by hbourkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_printf_displays(va_list element, const char *str, int i, int *cmpt)
{
	if (str[i + 1] == 'd' || str[i + 1] == 'i')
		ft_putnbr(va_arg(element, int), cmpt);
	else if (str[i + 1] == 's')
		ft_putstr(va_arg(element, char *), cmpt);
	else if (str[i + 1] == 'c')
		ft_putchar(va_arg(element, int), cmpt);
	else if (str[i + 1] == 'p')
	{
		ft_putstr("0x", cmpt);
		ft_puthexa(va_arg(element, unsigned long), cmpt, "0123456789abcdef");
	}
	else if (str[i + 1] == 'u')
		ft_putnbr_unsigned(va_arg(element, unsigned int), cmpt);
	else if (str[i + 1] == 'x')
		ft_puthexa(va_arg(element, unsigned int), cmpt, "0123456789abcdef");
	else if (str[i + 1] == 'X')
		ft_puthexa(va_arg(element, unsigned int), cmpt, "0123456789ABCDEF");
	else if (str[i + 1] == '%')
		ft_putchar('%', cmpt);
	else
		ft_putchar(str[i + 1], cmpt);
}

int	ft_printf(const char *str, ...)
{
	va_list	element;
	int		i;
	int		cmpt;

	i = 0;
	cmpt = 0;
	va_start(element, str);
	while (str[i])
	{
		if (str[i] == '%' && str[i + 1] != '\0')
		{
			ft_printf_displays(element, str, i, &cmpt);
			i = i + 2;
		}
		else
		{
			write(1, &str[i], 1);
			i++;
			cmpt++;
		}
	}
	va_end(element);
	return (cmpt);
}
