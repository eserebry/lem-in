/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eserebry <eserebry@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/16 21:25:24 by eserebry          #+#    #+#             */
/*   Updated: 2017/11/21 21:22:57 by eserebry         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

int		ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
