/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_putnbr_launcher.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 20:08:31 by fbabin            #+#    #+#             */
/*   Updated: 2018/12/02 14:24:18 by bleplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "putnbr_test.h"

int		putnbr_launcher(void)
{
	t_test_list		*test_list;

	test_list = NULL;
	test_list_add(&test_list, "test_putnbr_int_min", &test_putnbr_int_min);
	test_list_add(&test_list, "test_putnbr_m_20", &test_putnbr_m_20);
	test_list_add(&test_list, "test_putnbr_zero", &test_putnbr_zero);
	test_list_add(&test_list, "test_putnbr_one", &test_putnbr_one);
	test_list_add(&test_list, "test_putnbr_p_20", &test_putnbr_p_20);
	test_list_add(&test_list, "test_putnbr_int_max", &test_putnbr_int_max);
	return (launch_tests(&test_list));
}
