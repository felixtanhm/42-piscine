/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felixtanhm <felixtanhm@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 05:55:10 by felixtanhm        #+#    #+#             */
/*   Updated: 2024/03/04 06:13:59 by felixtanhm       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
  unsigned int i = 0;

  while(s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i] && i < n - 1)
  {
    i++;
  }

  return (s1[i] - s2[i]);
}

int main(void)
{
  char str1[40] = "hello";
  char str2[40] = "hella";
  int result = ft_strncmp(str1, str2, 4);
  printf("%d\n", result);

return 0;
  
}