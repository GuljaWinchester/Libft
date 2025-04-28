/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperedny <gperedny@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:39:14 by gperedny          #+#    #+#             */
/*   Updated: 2025/04/28 12:52:35 by gperedny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
	return (dest);
}
// int	main(void)
//{
//	char s[] = "Bitch";
//	char d[6] = "";
//	printf("%s\n%s\n", s, d);
//	ft_memcpy(d, s, 5 * sizeof(char));
//	printf("%s\n%s\n", s, d);
//}