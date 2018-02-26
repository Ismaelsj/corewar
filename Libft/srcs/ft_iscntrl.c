/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iscntrl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidibe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 13:44:57 by isidibe-          #+#    #+#             */
/*   Updated: 2017/11/10 13:45:43 by isidibe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_iscntrl(int c)
{
	if ((c >= 0 && c <= 31) || c == 127)
		return (1);
	return (0);
}