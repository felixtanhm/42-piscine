/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op_exec.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feltan <feltan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 16:30:26 by feltan            #+#    #+#             */
/*   Updated: 2024/03/20 14:54:46 by feltan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_op_suite.h"
#include "ft_utils.h"
#include <stdio.h>

void ft_op_init(int (*function[5])(int, int))
{
	function[0] = &ft_add;
	function[1] = &ft_minus;
	function[2] = &ft_mul;
	function[3] = &ft_div;
	function[4] = &ft_mod;
}

void ft_op_calc(int a, int b, char *op, int (*function[5])(int, int))
{
	int result = 0;

	if(*op == '+')
		result = function[0](a, b);
	if(*op == '-')
		result = function[1](a, b);
	if(*op == '*')
		result = function[2](a, b);
	if(*op == '/')
	{
		if(b == 0)
		{
			ft_putstr("Stop : division by zero");
			return;
		}
		else
			result = function[3](a, b);
	}
	if(*op == '%')
	{
		if(b == 0)
		{
			ft_putstr("Stop : modulo by zero");
			return;
		}
		else
			result = function[4](a, b);
	}
	ft_putnbr(result);
}

void ft_op_exec(char *a, char *b, char *op)
{
	int (*op_suite[5])(int, int);

	ft_op_init(op_suite);
	ft_op_calc(ft_atoi(a), ft_atoi(b), op, op_suite);
	ft_putchar('\n');
}
