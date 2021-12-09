/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourkan <hbourkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 15:59:18 by hbourkan          #+#    #+#             */
/*   Updated: 2021/11/27 15:24:50 by hbourkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c, int *cmpt)
{
	write(1, &c, 1);
	(*cmpt)++;
}

void	ft_putstr(char *s, int *cmpt)
{
	if (s == NULL)
	{
		write(1, "(null)", 6);
		*cmpt = *cmpt + ft_strlen("(null)");
		return ;
	}
	write(1, s, ft_strlen(s));
	*cmpt = *cmpt + ft_strlen(s);
}

void	ft_putnbr(int n, int *cmpt)
{
	long	n2;
	long	n3;
	int		cpt;

	n2 = n;
	n3 = 0;
	cpt = compteur_nombre(n);
	if (n2 < 0)
	{
		write(1, "-", 1);
		n2 = n2 * -1;
		(*cmpt)++;
	}
	while (cpt > 0)
	{
		n3 = n2 / powerof(10, cpt - 1);
		ft_putchar(n3 % 10 + '0', cmpt);
		cpt--;
	}
}

void	ft_putnbr_unsigned(unsigned int n, int *cmpt)
{
	unsigned int	n2;
	unsigned int	n3;
	int				cpt;

	n2 = (unsigned int)n;
	n3 = 0;
	cpt = compteur_nombre2(n);
	while (cpt > 0)
	{
		n3 = n2 / powerof(10, cpt - 1);
		ft_putchar(n3 % 10 + '0', cmpt);
		cpt--;
	}
}

void	ft_puthexa(unsigned long integer, int *cmpt, char *str)
{
	if (integer >= 16)
	{
		ft_puthexa(integer / 16, cmpt, str);
		ft_puthexa(integer % 16, cmpt, str);		
	}
	else
		ft_putchar(str[integer], cmpt);
}