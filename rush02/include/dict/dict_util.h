/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_util.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamu <mamu@c2r6s9.42singapore.sg>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 18:38:52 by mamu              #+#    #+#             */
/*   Updated: 2024/03/17 18:41:03 by mamu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DICT_UTIL_H
# define DICT_UTIL_H

int	dict_skip_non_numeric(char *str);
int	dict_skip_to_word(char *str);
int	dict_skip_to_next_entry(char *str);
int	dict_getnbr(char *dest, char *str);
int	dict_getword(char *dest, char *str);

#endif
