/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feltan <feltan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 06:45:29 by felixtanhm        #+#    #+#             */
/*   Updated: 2024/03/04 10:04:35 by feltan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strlen(char *str)
{
  int i = 0;

  while(str[i] != '\0')
  {
    i++;
  }

  return i;
}

char *ft_strstr(char *str, char *to_find)
{
  int i = 0;
  int j = 0;
  int to_find_len = ft_strlen(to_find);

  while(str[i] != '\0')
  {
    if(str[i] == to_find[j])
    {
			while(to_find[j] != '\0')
			{
				if(to_find[j] == str[i + j])
					j++;
				if(to_find[j] != str[i + j])
					j = to_find_len;
			}
			if(j == to_find_len)
				return &str[i];
    }
    i++;
  }
  return NULL;
}

int main(void)
{
  char str[40] = "hello";
  char to_find[40] = "ell";

  char *ptr = ft_strstr(str, to_find);
  printf("%s\n", ptr);
  return 0;
}
