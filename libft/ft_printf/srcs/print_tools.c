/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_prec_tools.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eserebry <eserebry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/19 20:34:30 by eserebry          #+#    #+#             */
/*   Updated: 2017/09/21 22:55:31 by eserebry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

char	*ft_str_prec(char *s1, int dot, int end, int hash)
{
	char	*tmp;
	int		i;
	int		j;

	i = -1;
	j = 0;
	tmp = ft_strnew(ft_strlen(s1) + 1);
	while (s1[++i] != '\0')
	{
		tmp[j++] = s1[i];
		if ((i == dot - 1 && end > 0) || hash == 1)
		{
			tmp[j++] = '.';
			hash = 0;
		}
		if (i >= end)
		{
			tmp[j] = '\0';
			break ;
		}
	}
	return (tmp);
}

void	print_prec_width(t_printf *e)
{
	int i;
	int len;

	i = -1;
	len = ft_strlen(e->out) + e->flag.plus + e->flag.sp;
	if (e->flag.prec >= 0)
	{
		while (e->flag.width - ++i > len)
			e->ret += e->flag.zero ?
			write(e->fd, "0", 1) : write(e->fd, " ", 1);
		i = -1;
		while ((int)ft_strlen(e->out) < len - ++i)
			e->ret += write(e->fd, "0", 1);
	}
	else
		while (e->flag.width - ++i > len)
			e->ret += (e->flag.zero == 1 ?
			write(e->fd, "0", 1) : write(e->fd, " ", 1));
}
