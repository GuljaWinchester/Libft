/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperedny <gperedny@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 15:02:08 by gperedny          #+#    #+#             */
/*   Updated: 2025/04/28 12:52:42 by gperedny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	if (!dest && !src)
		return (NULL);
	else if (dest <= src)
	{
		while (n--)
			*d++ = *s++;
		return (d);
	}
	else
	{
		while (n-- > 0)
		{
			d[n] = s[n];
		}
	}
	return (dest);
}
// int	main(void)
//{
//	char	s[] = "Bitch";
//	char	d[6] = "";

//	printf("%s\n%s\n", s, d);
//	memmove(d, s, 2 * sizeof(char));
//	printf("%s\n%s\n", s, d);
//}
// int	main(void)
//{
//	char s[] = "Bitch";
//	char d[6] = "";
//	printf("%s\n%s\n", s, d);
//	ft_memmove(d, s, 2 * sizeof(char));
//	printf("%s\n%s\n", s, d);
//}