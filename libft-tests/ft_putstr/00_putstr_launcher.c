/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_putstr_launcher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 23:39:31 by fbabin            #+#    #+#             */
/*   Updated: 2018/12/02 14:24:42 by bleplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "putstr_test.h"

int		putstr_launcher(void)
{
	t_test_list		*test_list;

	test_list = NULL;
	test_list_add(&test_list, "test_putstr_simple_1", &test_putstr_simple_1);
	test_list_add(&test_list, "test_putstr_null", &test_putstr_null);
	test_list_add(&test_list, "test_putstr_zeros", &test_putstr_zeros);
	return (launch_tests(&test_list));
}
