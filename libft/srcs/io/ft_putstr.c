/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <fbabin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 22:13:30 by fbabin            #+#    #+#             */
/*   Updated: 2017/11/14 14:11:38 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "io.h"

void	ft_putstr(const char *s)
{
	int		i;

	i = -1;
	if (!s)
	{
		ft_putstr("(null)");
		return ;
	}
	while (s[++i])
		;
	write(1, s, i);
}
