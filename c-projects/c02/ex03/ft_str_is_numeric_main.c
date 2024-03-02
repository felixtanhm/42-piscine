/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felixtanhm <felixtanhm@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 03:44:50 by felixtanhm        #+#    #+#             */
/*   Updated: 2024/03/03 04:07:42 by felixtanhm       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_str_is_numeric(char *str)
{
  int i = 0;

  if(str[i] == '\0')
    return 1;
  
  while (str[i] != '\0')
  {
    if(str[i] < '0' || str[i] > '9')
      return 0;
    i++;
  }

  return 1;
}

int main(void)
{
  char str[40] = "123";
  int i = ft_str_is_numeric(str);

  printf("%d", i);
  return 0;
}