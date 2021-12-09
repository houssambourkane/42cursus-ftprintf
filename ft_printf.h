/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbourkan <hbourkan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 21:39:54 by hbourkan          #+#    #+#             */
/*   Updated: 2021/11/27 15:19:08 by hbourkan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

int		ft_printf(const char *str, ...);
void	ft_printf_displays(va_list element, const char *str, int i, int *cmpt);
char	*ft_strdup(char *s1);
size_t	ft_strlen(const char *str);
void	ft_putchar(char c, int *cmpt);
void	ft_putstr(char *s, int *cmpt);
void	ft_putnbr(int n, int *cmpt);
void	ft_putnbr_unsigned(unsigned int n, int *cmpt);
void	ft_puthexa(unsigned long integer, int *cmpt, char *str);
int		compteur_nombre(int n);
int		compteur_nombre2(unsigned int n);
int		powerof(unsigned int nb, int power);
#endif 
