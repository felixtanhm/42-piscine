/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: felixtanhm <felixtanhm@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/03 13:09:01 by felixtanhm        #+#    #+#             */
/*   Updated: 2024/03/03 13:46:56 by felixtanhm       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcapitalize(char *str)
{
  int i = 1;
  int isPriorAlphaNum;

  if(str[i] >= '0' && str[i] <= '9' || str[0] >= 'A' && str[0] <= 'Z' || str[0] >= 'a' && str[0] <= 'z') 
  // Check if first char is alphanumeric
    isPriorAlphaNum = 1;
    if(str[i] >= 'a' && str[i] <= 'z')
      str[0] -= 32;

  while(str[i] != '\0')
  {
    if(str[i] >= '0' && str[i] <= '9' || str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
    { // If current char is alphanumeric, check if current char is lowercase && previous char is not alphanumeric
      if(isPriorAlphaNum == 0 && str[i] >= 'a' && str[i] <= 'z')
        str[i] -= 32; // Uppercase
      isPriorAlphaNum = 1; // Set previous char to be alphanumeric
    } 
    else // If current char is not alphanumeric, i++, set previous char to be non-alphanumeric
    {
      isPriorAlphaNum = 0;
    }
    i++;
  }
  return str;
}