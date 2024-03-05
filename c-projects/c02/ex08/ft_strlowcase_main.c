/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase_main.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feltan <feltan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 04:23:18 by felixtanhm        #+#    #+#             */
/*   Updated: 2024/03/05 11:45:31 by feltan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strlowcase(char *str)
{
  int i = 0;

  while(str[i] != '\0')
  {
	if(str[i] >= 'A' && str[i] <= 'Z')
    	str[i] = str[i] + 32;
    i++;
  }

  return str;
}

int main(void)
{
  char str[40] = "42HELLO";
  ft_strlowcase(str);
  printf("%s", str);
  return 0;
}
