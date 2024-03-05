/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feltan <feltan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 06:45:29 by felixtanhm        #+#    #+#             */
/*   Updated: 2024/03/05 17:03:11 by feltan           ###   ########.fr       */
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

  while(str[i] != '\0')
  {
    if(str[i] == to_find[j])
    {
			while(to_find[j] != '\0')
			{
				if (to_find[j] != str[i + j])
					break ;
				else
					j++;
			}
			if (to_find[j] == '\0')
				return (&str[i]);
			j = 0;
    }
    i++;
  }
  return NULL;
}

int main(void)
{
  char str[40] = "jeepya meepya";
  char to_find[40] = "ep";

  char *ptr = ft_strstr(str, to_find);
  printf("%s\n", ptr);
  return 0;
}
