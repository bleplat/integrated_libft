/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   06_putnbr_int_max.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/30 16:18:59 by fbabin            #+#    #+#             */
/*   Updated: 2018/11/29 23:36:38 by fbabin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "putnbr_test.h"

int		test_putnbr_int_max(void)
{
	int		stdout_fd;
	int		p_fd[2];
	char	buff1[100];

	stdout_fd = get_stdout_fd(p_fd);
	ft_putnbr(2147483647);
	get_stdout_buffer(100, buff1, stdout_fd, p_fd);
	if (strcmp(buff1, "2147483647") == 0)
		return (0);
	else
		return (-1);
}