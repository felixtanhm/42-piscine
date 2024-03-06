/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_main.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felixtanhm <felixtanhm@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/04 05:55:10 by felixtanhm        #+#    #+#             */
/*   Updated: 2024/03/06 15:48:05 by felixtanhm       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
  unsigned int i = 0;

  while((s1[i] != '\0' || s2[i] != '\0') && i < n)
  {
	if(s1[i] != s2[i])
		return (s1[i] - s2[i]);
	i++;
  }

  return (0);
}

int main(void)
{
  char str1[40] = "hello";
  char str2[40] = "hella";
  int result = ft_strncmp(str1, str2, 5);
  int result2 = strncmp(str1, str2, 5);
  printf("Diff Character, Same Length\n");
  printf("Felix Try: %d\n", result);
  printf("Control: %d\n", result2);

  char str3[40] = "hello";
  char str4[40] = "hell";
  int result3 = ft_strncmp(str3, str4, 5);
  int result4 = strncmp(str3, str4, 5);
  printf("Same Character, Longer Length\n");
  printf("Felix Try2: %d\n", result3);
  printf("Control2: %d\n", result4);

  char str5[40] = "hello";
  char str6[40] = "hella";
  int result5 = ft_strncmp(str5, str6, 4);
  int result6 = strncmp(str5, str6, 4);
  printf("Diff Character, Shorter Length\n");
  printf("Felix Try3: %d\n", result5);
  printf("Control3: %d\n", result6);

  char str7[40] = "hallo";
  char str8[40] = "hella";
  int result7 = ft_strncmp(str7, str8, 5);
  int result8 = strncmp(str7, str8, 5);
  printf("Diff Character at Start, Same Length\n");
  printf("Felix Try: %d\n", result7);
  printf("Control: %d\n", result8);

  char str9[40] = "hello";
  char str10[40] = "hello";
  int result9 = ft_strncmp(str9, str10, 5);
  int result10 = strncmp(str9, str10, 5);
  printf("Same strings\n");
  printf("Felix Try: %d\n", result9);
  printf("Control: %d\n", result10);
return 0;

}
