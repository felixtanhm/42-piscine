/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nbr_buffer.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamu <mamu@c2r6s9.42singapore.sg>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/17 22:04:36 by mamu              #+#    #+#             */
/*   Updated: 2024/03/17 22:55:15 by mamu             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NBR_BUFFER_H
# define NBR_BUFFER_H

# include "nbr_type.h"

t_nbr_buffer	*nbr_buffer_new(void);
void			nbr_buffer_add(t_nbr_buffer *buffer, char *word);
void			nbr_buffer_print(t_nbr_buffer *buffer);
void			nbr_buffer_destroy(t_nbr_buffer *buffer);

#endif
