/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feltan <feltan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:35:23 by feltan            #+#    #+#             */
/*   Updated: 2024/03/11 16:11:56 by feltan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int count_strlen(char *str)
{
  int i = 0;

  while(str[i] != '\0')
    i++;

  return i;
}

char *ft_strcat(char *dest, char *src)
{
  int destLen = count_strlen(dest);
  int i = 0;

  while(src[i] != '\0')
  {
    dest[destLen + i] = src[i];
    i++;
  }
  dest[destLen + i] = '\0';

  return dest;
}

char *ft_strjoin(int size, char **strs, char *sep)
{
	if(size == 0)
		return "";

	int i;
	i = 0;
	char *joined_str;
	int sep_size = sizeof(sep) * (size - 1);
	joined_str = malloc(sizeof(strs) + sep_size);

	while(i < size)
	{
		ft_strcat(joined_str, strs[i]);
		if(i < size - 1)
			ft_strcat(joined_str, sep);
		i++;
	}
	joined_str[count_strlen(joined_str)] = '\0';
	return joined_str;
}
