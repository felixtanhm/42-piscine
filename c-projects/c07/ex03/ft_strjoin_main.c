/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feltan <feltan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/11 14:35:23 by feltan            #+#    #+#             */
/*   Updated: 2024/03/11 18:12:01 by feltan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

int ft_strlen(char *str)
{
  int i = 0;

  while(str[i] != '\0')
    i++;

  return i;
}

char *ft_strcat(char *dest, char *src)
{
  int destLen = ft_strlen(dest);
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
		return ((char *)malloc(sizeof(char)));

	int i;
	char *joined_str;
	i = 0;
	joined_str = malloc(sizeof(strs) + sizeof(sep) * (size - 1));

	while(i < size)
	{
		ft_strcat(joined_str, strs[i]);
		if(i < size - 1)
			ft_strcat(joined_str, sep);
		i++;
	}
	joined_str[ft_strlen(joined_str)] = '\0';
	return joined_str;
}

int main(void)
{
	char *strs[] = {"one", "two", "three"};
	char *res = ft_strjoin(3, strs, "");
	printf("%s", res);
	return 0;
}
