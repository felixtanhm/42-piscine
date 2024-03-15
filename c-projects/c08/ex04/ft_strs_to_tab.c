/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feltan <feltan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 12:14:22 by feltan            #+#    #+#             */
/*   Updated: 2024/03/15 09:38:50 by feltan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"
#include <stdio.h>

int ft_strlen(char *str)
{
	int i = 0;

	while(str[i] != '\0')
		i++;
	return i;
}

char *ft_strdup(char *src)
{
	int len;
	int i = 0;
	char *dest;

	len = ft_strlen(src);
	dest = (char *)malloc(sizeof(char) * (len + 1));
	while(src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return dest;
}

struct s_stock_str *ft_strs_to_tab(int ac, char **av)
{
	int i;
	t_stock_str *result;

	i = 0;
	result = (t_stock_str *)malloc((ac + 1) * sizeof(t_stock_str));
	if(result == NULL)
		return NULL;
	while(i < ac)
	{
		result[i].size = ft_strlen(av[i]);
		result[i].str = av[i];
		result[i].copy = ft_strdup(av[i]);
		i++;
	}
	result[i].str = 0;
	return result;
}

int main(int argc, char **argv)
{
	int i;
	struct s_stock_str *arr;

	arr = ft_strs_to_tab(argc, argv);
	i = 0;
	while (arr[i].str != 0)
	{
		printf("size: %d\n", arr[i].size);
		printf("str: %s\n", arr[i].str);
		printf("copy: %s\n", arr[i].copy);
		i++;
	}
	return (0);
}
