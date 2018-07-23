/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_update_spe.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 17:14:10 by chaidama          #+#    #+#             */
/*   Updated: 2018/06/19 17:14:12 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_update_spe(t_env *env)
{
	if (env->spe.flg_print == 1)
	{
		ft_print_stacks(env->stack_a, env->stack_b, 0);
		usleep(env->spe.frame_rate);
	}
	if (env->spe.flg_visual == 1)
	{
		ft_visual_in_terminal(env->stack_a, env->stack_b, env);
		usleep(env->spe.frame_rate);
	}
}
