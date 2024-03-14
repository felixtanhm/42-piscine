/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feltan <feltan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 14:54:44 by feltan            #+#    #+#             */
/*   Updated: 2024/03/14 17:35:29 by feltan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_any(char **tab, int(*f)(char *))
{
	int i = 0;

	while(tab[i])
	{
		if(f(tab[i]) != 0)
			return 1;
		i++;
	}
	return 0;
}

int is_5(char *str)
{
	int i = 0;

	while(str[i] != '\0')
	{
		if(str[i] == 'a')
			return (1);
		i++;
	}
	return 0;
}

#include <stdio.h>
int main(void)
{
	char *strs[5] = {"hella", "world", "hell"};
	int res = ft_any(strs, &is_5);
	printf("%d", res);
	return 0;
}
