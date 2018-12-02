/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 19:42:47 by fbabin            #+#    #+#             */
/*   Updated: 2018/12/02 14:34:14 by bleplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

/*
** Create an element in the test list
*/

t_test_list		*test_list_create(char *test_name, int (*test_function)(void))
{
	t_test_list	*t;

	if (!test_name || !test_function)
		exit(ut_putstr_error("test_create : NULL parameter\n"));
	if (!(t = (t_test_list*)malloc(sizeof(t_test_list))))
		exit(ut_putstr_error("test_create : malloc failed\n"));
	t->test_name = test_name;
	t->test_function = test_function;
	t->next = NULL;
	return (t);
}

/*
** Add an element at the end of the test list.
*/

void			test_list_add(t_test_list **test_list, char *test_name,
								int (*test_function)(void))
{
	t_test_list		*tmp;

	if (!test_list || !test_name || !test_function)
		exit(ut_putstr_error("test_add : NULL parameter\n"));
	if (*test_list)
	{
		tmp = *test_list;
		while (tmp->next)
			tmp = tmp->next;
		tmp->next = test_list_create(test_name, test_function);
	}
	else
		*test_list = test_list_create(test_name, test_function);
}

/*
** Delete all elements in the test list
*/

void			test_list_del(t_test_list **test_list)
{
	t_test_list		*tmp;

	if (!test_list)
		exit(ut_putstr_error("test_del : NULL parameter\n"));
	while (*test_list)
	{
		tmp = (*test_list)->next;
		free(*test_list);
		*test_list = NULL;
		*test_list = tmp;
	}
}

/*
** Run all the tests in the test list
*/

int		test_list_run(t_test_list **testlst)
{
	t_test_list		*l;
	pid_t			pid;
	int				tests_passed;
	int				tests_total;

	tests_passed = 0;
	tests_total = 0;
	l = *testlst;
	while ((*testlst))
	{
		pid = fork();
		if (pid < 0)
			exit(ut_putstr_error("test_run : fork returned a wrong pid\n"));
		else if (pid == 0)
			child_process(*testlst);
		else
			parent_process(*testlst, &tests_passed);
		++tests_total;
		*testlst = (*testlst)->next;
	}
	ut_putscore(tests_passed, tests_total);
	*testlst = l;
	return ((tests_passed == tests_total) ? 0 : -1);
}

/*
** Both run, then free given test list.
** Return 1 if a test failed, otherwise return 0.
*/

int		launch_tests(t_test_list **tests)
{
	int		result;

	result = test_list_run(tests);
	test_list_del(tests);
	return (result);
}
