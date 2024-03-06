/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_main.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felixtanhm <felixtanhm@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 10:40:36 by feltan            #+#    #+#             */
/*   Updated: 2024/03/06 16:18:45 by felixtanhm       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int whitespace(char *str, int *ptr)
{
	int i = 0;
	int state = 1;

	while((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
	{
		i++;
	}
	while(str[i] == '+' || str[i] == '-')
	{
			if(str[i] == '-')
				state *= -1;
			i++;
	}

	*ptr = i;
	return state;
}

int ft_atoi(char *str)
{
	int i;
	int sign;
	int result = 0;

	sign = whitespace(str, &i);
	while(str[i] >= '0' && str[i] <= '9' && str[i])
	{
		result *= 10;
		result += str[i] - '0';
		i++;
	}
	result *= sign;
	return result;
}

int main(void)
{
	char str[] = "    ---+-+-12ab567";
	int res = ft_atoi(str);
	int res2 = atoi(str);
	printf("Res1: %d\n", res);
	printf("Res2: %d\n", res2);
	return 0;
}
