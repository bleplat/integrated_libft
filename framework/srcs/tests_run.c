/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tests_run.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbabin <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/28 19:44:02 by fbabin            #+#    #+#             */
/*   Updated: 2018/12/02 14:03:52 by bleplat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libunit.h"

/*
** Exit the test if the timeout alarm ring
*/

void	exit_timeout(int sig)
{
	(void)sig;
	exit(SIGALRM);
}

/*
** Run the test in the child process
*/

void	child_process(t_test_list *test_list)
{
	if (!test_list)
		exit(ut_putstr_error("child_process : NULL parameter\n"));
	signal(SIGALRM, exit_timeout);
	alarm(T_TIMEOUT_DELAY);
	exit((test_list->test_function() == 0) ? 0 : -1);
}

/*
** Write the result of a test depending on the test signal
*/

void	process_status(char *test_name, int status, int *tests_passed)
{
	if (!test_name || !tests_passed)
		exit(ut_putstr_error("process_status : NULL parameter\n"));
	if (WIFEXITED(status))
	{
		if (WEXITSTATUS(status) == 0)
		{
			*tests_passed += 1;
			ut_puttest_result(test_name, T_LGREEN, "OK");
		}
		else if (WEXITSTATUS(status) == SIGALRM)
			ut_puttest_result(test_name, T_RED, "TIMEOUT");
		else
			ut_puttest_result(test_name, T_LRED, "KO");
	}
	if (WIFSIGNALED(status))
	{
		if (WTERMSIG(status) == SIGSEGV)
			ut_puttest_result(test_name, T_RED, "SEGV");
		else if (WTERMSIG(status) == SIGBUS)
			ut_puttest_result(test_name, T_RED, "BUSE");
		else if (WTERMSIG(status) == SIGABRT)
			ut_puttest_result(test_name, T_RED, "ABORT");
		else if (WTERMSIG(status) == SIGFPE)
			ut_puttest_result(test_name, T_RED, "FPE");
	}
}

/*
** Run the parent process which waits for child status
*/

void	parent_process(t_test_list *test, int *tests_passed)
{
	int		status;

	wait(&status);
	process_status(test->test_name, status, tests_passed);
}

