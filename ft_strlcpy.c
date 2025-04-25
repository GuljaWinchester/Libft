/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperedny <gperedny@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 15:49:28 by gperedny          #+#    #+#             */
/*   Updated: 2025/04/25 14:13:29 by gperedny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	len;

	len = 0;
	while (src[len] && --size)
	{
		*dst++ = src[len++];
	}
	*dst = '\0';
	while (src[len])
		++len;
	return (len);
}
int	main(void)
{
	char	d[10];
	char	s[] = "ByeBitch";

	printf("%zu\n", ft_strlcpy(d, s, 4));
	return (0);
}
