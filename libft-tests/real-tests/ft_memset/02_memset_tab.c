/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_memset_tab.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 16:18:59 by fbabin            #+#    #+#             */
/*   Updated: 2018/09/30 16:23:45 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memset_test.h"

int		test_memset_tab(void)
{
	char	buff1[100];
	char	buff2[100];

	memset((char*)&buff1, '\t', 3);
	ft_memset((char*)&buff2, '\t', 3);
	if (strcmp(buff1, buff2) == 0)
		return (0);
	else
		return (-1);
}