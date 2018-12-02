/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_memcpy_launcher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 20:08:31 by fbabin            #+#    #+#             */
/*   Updated: 2018/12/02 14:22:34 by bleplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memcpy_test.h"

int		memcpy_launcher(void)
{
	t_test_list		*test_list;

	test_list = NULL;
	test_list_add(&test_list, "test_memcpy_simple_1", &test_memcpy_simple_1);
	test_list_add(&test_list, "test_memcpy_simple_2", &test_memcpy_simple_2);
	test_list_add(&test_list, "test_memcpy_null_1", &test_memcpy_null_1);
	test_list_add(&test_list, "test_memcpy_null_2", &test_memcpy_null_2);
	return (launch_tests(&test_list));
}
