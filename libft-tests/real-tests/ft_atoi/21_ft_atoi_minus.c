/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   21_ft_atoi_minus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleplat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 17:42:28 by bleplat           #+#    #+#             */
/*   Updated: 2018/12/02 17:42:42 by bleplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		test_ft_atoi_minus(void)
{
	if (ft_atoi("-") == atoi("-"))
		return (0);
	else
		return (-1);
}
