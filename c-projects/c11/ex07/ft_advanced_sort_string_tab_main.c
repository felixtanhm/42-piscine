/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab_main.c                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felixtanhm <felixtanhm@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/20 12:10:57 by feltan            #+#    #+#             */
/*   Updated: 2024/03/24 10:17:31 by felixtanhm       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	ft_swap(char **a, char **b)
{
	char	*tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
int	ft_strlen(char **str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
void	ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *))
{
	int	i;
	int	j;
int		size;

	i = 0;
	size = ft_strlen(tab);
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (cmp(tab[j], tab[j + 1]) > 0)
			{
				ft_swap(&tab[j], &tab[j + 1]);
			}
			j++;
		}
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int		main(void)
{
	int		index;
	char	**tab;

	tab = malloc(8 * sizeof(char *));
	tab[0] = strdup("Hello");
	tab[1] = strdup("friend");
	tab[2] = strdup("good");
	tab[3] = strdup("luck");
	tab[4] = strdup("in");
	tab[5] = strdup("your");
	tab[6] = strdup("piscine");
	tab[7] = 0;
	index = 0;
	while (tab[index])
	{
		printf("tab[%d] <@ %p> = $%s$\n", index, tab + index, tab[index]);
		index++;
	}
	ft_advanced_sort_string_tab(tab, &ft_strcmp);
	printf("\n");
	index = 0;
	while (tab[index])
	{
		printf("tab[%d] <@ %p> = $%s$\n", index, tab + index, tab[index]);
		index++;
	}
}
