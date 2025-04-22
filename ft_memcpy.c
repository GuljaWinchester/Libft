/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperedny <gperedny@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:39:14 by gperedny          #+#    #+#             */
/*   Updated: 2025/04/22 15:38:18 by gperedny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	while (n > 0)
	{
		*d++ = *s++;
		n--;
	}
	return (d);
}
int	main(void)
{
	char s[] = "Bitch";
	char d[4] = "";
	printf("%s\n%s\n", s, d);
	ft_memcpy(d, s, 5 * sizeof(char));
	printf("%s\n%s\n", s, d);
}