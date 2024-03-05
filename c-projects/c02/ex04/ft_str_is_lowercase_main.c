/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase_main.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feltan <feltan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 03:44:50 by felixtanhm        #+#    #+#             */
/*   Updated: 2024/03/05 17:39:04 by feltan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_lowercase(char *str)
{
  int i = 0;

  if(str[i] == '\0')
    return 1;

  while (str[i] != '\0')
  {
    if(str[i] > 'z' || str[i] < 'a')
      return 0;
    i++;
  }

  return 1;
}

int main(void)
{
  char str[40] = "hello";
  int i = ft_str_is_lowercase(str);

  printf("%d", i);
  return 0;
}
