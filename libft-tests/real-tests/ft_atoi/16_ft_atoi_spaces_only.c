/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   16_ft_atoi_spaces_only.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleplat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 17:32:26 by bleplat           #+#    #+#             */
/*   Updated: 2018/12/02 17:32:30 by bleplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

int		test_ft_atoi_spaces_only(void)
{
	if (ft_atoi("    ") == atoi("    "))
		return (0);
	else
		return (-1);
}
