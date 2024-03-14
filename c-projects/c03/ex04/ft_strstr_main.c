/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr_main.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feltan <feltan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 06:45:29 by felixtanhm        #+#    #+#             */
/*   Updated: 2024/03/14 11:09:36 by feltan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

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
  int j;
  if(to_find[0] == '\0')
	return str;
  while(str[i] != '\0')
  {
	j = 0;
	while(str[i + j] == to_find[j])
	{
		if(to_find[j + 1] == '\0')
			return &str[i];
		j++;
	}
	i++;
  }
  return (0);
}

int main(void)
{
  char str[40] = "jetya meepya";
  char to_find[40] = "";

  char *ptr = ft_strstr(str, to_find);
  char *control = strstr(str, to_find);
  printf("%s\n", ptr);
  printf("%s", control);
  return 0;
}
