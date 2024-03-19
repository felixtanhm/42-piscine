/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feltan <feltan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:35:23 by feltan            #+#    #+#             */
/*   Updated: 2024/03/18 23:19:38 by feltan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int ft_strlen(char *str)
{
  int i = 0;

  while(str[i] != '\0')
    i++;

  return i;
}

int ft_total_len(char **strings, char *sep, int size)
{
	int total = 0;
	int i = 0;
	int sep_len = ft_strlen(sep);

	while(i < size)
	{
		total = total + ft_strlen(strings[i]) + sep_len;
		i++;
	}
	total -= sep_len;
	return total;
}

char *ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char *ft_cpy_strings(char **strings, char *result, char *sep, int size)
{
	int i = 0;
	int sep_len = ft_strlen(sep);
	char *temp;

	temp = result;
	while(i < size)
	{
		ft_strcpy(temp, strings[i]);
		temp += ft_strlen(strings[i]);
		if(i < size - 1)
		{
			ft_strcpy(temp, sep);
			temp += sep_len;
		}
		i++;
	}
	temp[i] = '\0';
	return result;
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	if(size == 0)
		return ((char *)malloc(sizeof(char)));

	char *result;
	int total_len = ft_total_len(strs, sep, size);

	result = (char *)malloc(sizeof(char) * (total_len + 1));
	result = ft_cpy_strings(strs, result, sep, size);
	return result;
}
