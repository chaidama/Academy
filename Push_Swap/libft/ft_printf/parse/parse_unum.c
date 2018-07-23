/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_unum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chaidama <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/19 16:41:55 by chaidama          #+#    #+#             */
/*   Updated: 2018/06/19 16:41:57 by chaidama         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	padunum(t_format *flags)
{
	if (LT == 'o' && F_PND)
		padoct(flags);
	else if (LT == 'x' && F_PND && !(FBLEN == 1 && *((char*)ARG) == '0'))
		padhex(flags);
	else
		padnum(flags);
}

static void	parsehunum(t_format *flags, va_list *args)
{
	if (LEN == -2)
	{
		ARG = (unsigned char*)ft_memalloc(sizeof(unsigned char));
		*(unsigned char*)(ARG) = va_arg(*args, unsigned int);
		FBLEN = sizeof(char);
	}
	else if (LEN == -1)
	{
		ARG = (unsigned short*)ft_memalloc(sizeof(unsigned short));
		*(unsigned short*)(ARG) = va_arg(*args, unsigned int);
		FBLEN = sizeof(unsigned short);
	}
}

void		parseunum(t_format *flags, va_list *args)
{
	if (TYPE == 'U' || TYPE == 'B' || TYPE == 'O')
		LEN = 1;
	if (LEN == 1)
	{
		ARG = (unsigned long*)ft_memalloc(sizeof(unsigned long));
		*(unsigned long*)(ARG) = va_arg(*args, unsigned long);
		FBLEN = sizeof(unsigned long);
	}
	else if (LEN < 0)
		parsehunum(flags, args);
	else if (!LEN)
	{
		ARG = (unsigned int*)ft_memalloc(sizeof(unsigned int));
		*(unsigned int*)(ARG) = va_arg(*args, unsigned int);
		FBLEN = sizeof(unsigned int);
	}
	else if (LEN == 2)
	{
		ARG = (unsigned long*)ft_memalloc(sizeof(unsigned long long));
		*(unsigned long long*)(ARG) = va_arg(*args, unsigned long long);
		FBLEN = sizeof(unsigned long long);
	}
	formatunum(flags);
	padunum(flags);
}
