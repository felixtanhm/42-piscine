/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_main.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: feltan <feltan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/13 15:54:12 by feltan            #+#    #+#             */
/*   Updated: 2024/03/13 21:55:00 by feltan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int is_separator(char c, char *charset)
{
	int i = 0;

	while(charset[i] != '\0')
	{
		if(c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int ft_strlen_sep(char *str, char *charset)
{
	int i = 0;

	while(str[i] != '\0' && !is_separator(str[i], charset))
		i++;
	return (i);
}

int count_words(char *str, char *charset)
{
	int count = 0;
	int i = 0;

	while(str[i] != '\0')
	{
		while(is_separator(str[i], charset))
			i++;
		if(str[i] != '\0')
		{
			count++;
			while(!is_separator(str[i], charset) && str[i])
				i++;
		}
	}
	return count;
}

char *add_word(char *str, int len)
{
	int i;
	char *word;

	i = 0;
	word = (char *)malloc(sizeof(char) * (len + 1));
	while(i < len)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';

	return word;
}

char **ft_split(char *str, char *charset)
{
	char **strings;
	int i = 0;
	int j = 0;
	int word_len;
	int word_count = count_words(str, charset);

	strings = (char **)malloc(sizeof(char *) * (word_count + 1));
	while(str[i] != '\0')
	{
		while(is_separator(str[i], charset))
			i++;
		word_len = ft_strlen_sep(&str[i], charset);
		if(word_len)
		{
			strings[j] = add_word(&str[i], word_len);
			j++;
		}
		i += word_len;
		word_len = 0;
	}

	strings[i] = 0;
	return strings;
}

int main(void)
{
	char **split_string;
	split_string = ft_split("hello.I.am,Felix.Tan", ",.");
	printf("%s %s %s %s", split_string[0], split_string[1], split_string[2], split_string[3]);
	return 0;
}
