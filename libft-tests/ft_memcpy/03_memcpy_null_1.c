/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_memcpy_null_1.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 16:18:59 by fbabin            #+#    #+#             */
/*   Updated: 2018/12/02 22:50:11 by bleplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memcpy_test.h"

int		test_memcpy_null_1(void)
{
	memcpy(NULL, "toto", 0);
	ft_memcpy(NULL, "toto", 0);
	if (0 == 0)
		return (0);
	else
		return (-1);
}
