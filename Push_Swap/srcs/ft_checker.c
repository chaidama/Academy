/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checker.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 17:07:42 by chaidama          #+#    #+#             */
/*   Updated: 2018/06/19 17:07:47 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_checker(t_env *env)
{
	char *command;

	env->op = 0;
	while (get_next_line(0, &command) > 0)
	{
		ft_operations(command, &env->stack_a, &env->stack_b, env);
		if (IS_IN("sa") && IS_IN("sb") && IS_IN("ss") && IS_IN("pa") &&
		IS_IN("pb") && IS_IN("ra") && IS_IN("rb") && IS_IN("rr") &&
		IS_IN("rra") && IS_IN("rrb") && IS_IN("rrr"))
		{
			ft_putendl_fd("Error", 2);
			return (1);
		}
		ft_strdel(&command);
	}
	ft_strdel(&command);
	if (ft_lst_is_sorted(env->stack_a) == 1 && env->stack_b == NULL)
	{
		ft_putendl("OK");
		return (1);
	}
	else
		ft_putendl("KO");
	return (0);
}
