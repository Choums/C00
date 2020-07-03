/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: caidel <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/02 16:14:16 by caidel            #+#    #+#             */
/*   Updated: 2020/07/02 16:35:01 by caidel           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_is_negative(int n)
{
	char po;
	char ne;

	po = 'P';
	ne = 'N';
	if (n >= 0)
	{
		write(1, &po, 1);
	}
	else
	{
		write(1, &ne, 1);
	}
	return (0);
}