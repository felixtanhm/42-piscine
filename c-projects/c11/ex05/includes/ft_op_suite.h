/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_op_suite.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feltan <feltan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 11:22:58 by feltan            #+#    #+#             */
/*   Updated: 2024/03/20 14:00:37 by feltan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_OP_SUITE_H
#define FT_OP_SUITE_H

int ft_add(int a, int b);
int ft_minus(int a, int b);
int ft_mul(int a, int b);
int ft_div(int a, int b);
int ft_mod(int a, int b);
void ft_op_exec(char *a, char *b, char *op);

#endif
