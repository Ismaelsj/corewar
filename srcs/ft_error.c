/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isidibe- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 10:12:34 by isidibe-          #+#    #+#             */
/*   Updated: 2018/02/26 11:45:27 by isidibe-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "asm.h"

void		ft_malloc_error(t_cor *cor)
{
	ft_free(cor);
	ft_printf("%sERROR%s: Malloc error.\n", RED, RESET);
	close(cor->fd);
	exit(0);
}

void		ft_invalid_file(t_cor *cor)
{
	ft_free(cor);
	ft_printf("%sERROR%s: Invalid file.\n", RED, RESET);
	close(cor->fd);
	exit(0);
}

void		ft_open_error(t_cor *cor)
{
	ft_free(cor);
	ft_printf("%sERROR%s: Open error.\n", RED, RESET);
	close(cor->fd);
	exit(0);
}

void		ft_magic_error(t_cor *cor)
{
	ft_free(cor);
	ft_printf("%sERROR%s: Invalid corewar exec magic.\n", RED, RESET);
	close(cor->fd);
	exit(0);
}
