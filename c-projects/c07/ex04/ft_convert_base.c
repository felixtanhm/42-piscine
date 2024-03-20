/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feltan <feltan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 17:17:43 by feltan            #+#    #+#             */
/*   Updated: 2024/03/20 17:18:39 by feltan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int check_base(char *base);
int whitespace(char *str, int *ptr);
int ft_atoi_base(char *str, char *base);

int ft_strlen(char *str)
{
	int i = 0;

	while(str[i] != '\0')
		i++;
	return i;
}
