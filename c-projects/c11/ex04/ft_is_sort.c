/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feltan <feltan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 15:06:41 by feltan            #+#    #+#             */
/*   Updated: 2024/03/14 15:12:40 by feltan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_is_sorted_asc(void)
{

}

int ft_is_sorted_desc(void)
{

}

int ft_is_sort(int *tab, int length, int(*f)(int, int))
{
	if(ft_is_sorted_asc() || ft_is_sorted_desc())
		return 1;
	return 0;
}
