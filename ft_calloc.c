/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperedny <gperedny@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 19:13:35 by gperedny          #+#    #+#             */
/*   Updated: 2025/04/27 19:23:48 by gperedny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*calloc(size_t amount, size_t size)
{
	unsigned char *str;
	size_t i;

	i = 0;
	str = malloc(amount * size);
	if (!str)
		return (NULL);
	return (ft_bzero(str, sizeof(char)));
}