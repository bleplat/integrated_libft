/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_ft_atoi_launcher.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bleplat <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/02 17:03:52 by bleplat           #+#    #+#             */
/*   Updated: 2018/12/02 18:09:58 by bleplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "atoi_test.h"

int		atoi_launcher(void)
{
	t_test_list		*test_list;

	test_list = NULL;
	test_list_add(&test_list, "Lonely digit", &test_ft_atoi_positive_digit);
	test_list_add(&test_list, "Lonely negative digit", &test_ft_atoi_negative_digit);
	test_list_add(&test_list, "Positive number", &test_ft_atoi_positive_number);
	test_list_add(&test_list, "Negative number", &test_ft_atoi_negative_number);
	test_list_add(&test_list, "Maximum integer", &test_ft_atoi_maximum);
	test_list_add(&test_list, "Minimum integer", &test_ft_atoi_minimum);
	test_list_add(&test_list, "Zero", &test_ft_atoi_zero);
	test_list_add(&test_list, "Several zeroes", &test_ft_atoi_several_zeros);
	test_list_add(&test_list, "Not a number", &test_ft_atoi_not_number);
	test_list_add(&test_list, "Starting spaces", &test_ft_atoi_starting_spaces);
	test_list_add(&test_list, "Ending spaces", &test_ft_atoi_ending_spaces);
	test_list_add(&test_list, "Letter at middle", &test_ft_atoi_letter_at_middle);
	test_list_add(&test_list, "-- string", &test_ft_atoi_minus_minus);
	test_list_add(&test_list, "-+ string", &test_ft_atoi_minus_add);
	test_list_add(&test_list, "+- string", &test_ft_atoi_add_minus);
	test_list_add(&test_list, "Spaces only", &test_ft_atoi_spaces_only);
	test_list_add(&test_list, "Spaces before minimum", &test_ft_atoi_spaces_before_minimum);
	test_list_add(&test_list, "Minimum and a letter", &test_ft_atoi_letter_after_minimum);
	test_list_add(&test_list, "Too big number", &test_ft_atoi_overflow);
	test_list_add(&test_list, "Empty string", &test_ft_atoi_empty_string);
	test_list_add(&test_list, "Lonely minus", &test_ft_atoi_minus);
	return (launch_tests(&test_list));
}
