/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feltan <feltan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:04:24 by feltan            #+#    #+#             */
/*   Updated: 2024/03/14 17:27:52 by feltan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_count_if(char **tab, int length, int(*f)(char*))
{
	int i = 0;
	int count = 0;

	while(i < length)
	{
		if(f(tab[i]))
			count++;
		i++;
	}
	return count;
}

int is_5(char *s1)
{
	int i = 0;

	while(s1[i] != '\0')
		i++;
	return (i == 5);
}

#include <stdio.h>
int main(void)
{
	char *tab[5] = {"hello", "world", "you", "are", "cool"};
	int res = ft_count_if(tab, 5, &is_5);
	printf("%d", res);
	return 0;
}
