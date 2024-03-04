/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase_main.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feltan <feltan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 04:23:18 by felixtanhm        #+#    #+#             */
/*   Updated: 2024/03/04 11:53:53 by feltan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char *ft_strupcase(char *str)
{
  int i = 0;

  while(str[i] != '\0')
  {
	if(str[i] >= 'a' && str[i] <= 'z')
    	str[i] = str[i] - 32;
    i++;
  }

  return str;
}

int main(void)
{
  char str[40] = "hello";
  ft_strupcase(str);
  printf("%s", str);
  return 0;
}
