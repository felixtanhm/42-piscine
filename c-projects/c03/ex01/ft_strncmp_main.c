/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feltan <feltan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 05:55:10 by felixtanhm        #+#    #+#             */
/*   Updated: 2024/03/05 12:48:19 by feltan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
  unsigned int i = 0;

  while(s1[i] != '\0' && s2[i] != '\0' && i < n)
  {
	if(s1[i] != s2[i])
		return (s1[i] - s2[i]);
	i++;
  }

  return (s1[i -1] - s2[i - 1]);
}

int main(void)
{
  char str1[40] = "hello";
  char str2[40] = "hella";
  int result = ft_strncmp(str1, str2, 5);
  int result2 = strncmp(str1, str2, 5);
  printf("%d\n", result);
printf("%d\n", result2);


return 0;

}
