/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felixtanhm <felixtanhm@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 03:44:50 by felixtanhm        #+#    #+#             */
/*   Updated: 2024/03/03 04:03:35 by felixtanhm       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_alpha(char *str)
{
  int i = 0;

  if(str[i] == '\0')
    return 1;
  
  while (str[i] != '\0')
  {
    if(str[i] < 'A' || str[i] > 'z' || str[i] > 'Z' && str[i] < 'a')
      return 0;
    i++;
  }

  return 1;
}

int main(void)
{
  char str[40] = "hello";
  int i = ft_str_is_alpha(str);

  printf("%d", i);
  return 0;
}