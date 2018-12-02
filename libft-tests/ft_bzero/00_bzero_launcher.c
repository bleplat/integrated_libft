/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_bzero_launcher.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 20:08:31 by fbabin            #+#    #+#             */
/*   Updated: 2018/12/02 14:21:48 by bleplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bzero_test.h"

int		bzero_launcher(void)
{
	t_test_list		*test_list;

	test_list = NULL;
	test_list_add(&test_list, "test_bzero_simple_1", &test_bzero_simple_1);
	test_list_add(&test_list, "test_bzero_zero", &test_bzero_zero);
	test_list_add(&test_list, "test_bzero_null", &test_bzero_null);
	return (launch_tests(&test_list));
}
