/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calcul.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourkan <hbourkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:29:26 by hbourkan          #+#    #+#             */
/*   Updated: 2021/11/18 14:23:15 by hbourkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

size_t	ft_strlen(const char *str)
{
	size_t	c;

	c = 0;
	while (str[c])
		c++;
	return (c);
}

char	*ft_strdup(char *s1)
{
	char	*s2;
	size_t	i;
	size_t	len;

	i = 0;
	len = ft_strlen(s1);
	s2 = malloc(sizeof(char) * (len + 1));
	if (s2 == NULL)
		return (NULL);
	while (s1[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

int	powerof(unsigned int nb, int power)
{
	unsigned int	nb2;

	nb2 = nb;
	if (power == 0)
		return (1);
	while (power > 1)
	{
		nb2 = nb2 * nb;
		power--;
	}
	return (nb2);
}

int	compteur_nombre(int n)
{
	int		cpt;
	long	n2;

	cpt = 0;
	n2 = n;
	if (n2 < 0)
		n2 = n2 * -1;
	if (n2 == 0)
		return (1);
	while (n2 > 0)
	{
		n2 = n2 / 10;
		cpt++;
	}
	return (cpt);
}

int	compteur_nombre2(unsigned int n)
{
	int				cpt;
	unsigned long	n2;

	cpt = 0;
	n2 = n;
	if (n2 == 0)
		return (1);
	while (n2 > 0)
	{
		n2 = n2 / 10;
		cpt++;
	}
	return (cpt);
}
