/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_space.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eserebry <eserebry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/28 21:21:45 by eserebry          #+#    #+#             */
/*   Updated: 2017/12/05 15:54:40 by eserebry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		ft_space(char *str)
{
	int	space;
	int	i;

	space = 0;
	i = -1;
	while (str[++i])
	{
		if (str[i] == ' ')
			space++;
	}
	return (space);
}
