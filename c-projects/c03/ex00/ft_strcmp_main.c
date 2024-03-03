/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felixtanhm <felixtanhm@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 05:55:10 by felixtanhm        #+#    #+#             */
/*   Updated: 2024/03/04 06:09:39 by felixtanhm       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
  int i = 0;

  while(s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
  {
    i++;
  }

  return (s1[i] - s2[i]);
}

int main(void)
{
  char str1[40] = "zfz";
  char str2[40] = "gfg";
  int result = ft_strcmp(str1, str2);
  printf("%d\n", result);

return 0;
  
}