/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperedny <gperedny@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 17:51:05 by gperedny          #+#    #+#             */
/*   Updated: 2025/04/28 12:52:45 by gperedny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*p;

	p = s;
	while (n > 0)
	{
		*p = c;
		n--;
		p++;
	}
	return (s);
}
// int	main(void)
//{
//	char expl[50] = "Byebitch";
//	printf("%s\n", expl);
//	printf("%s\n", ft_memset(expl + 3, 'B', 1 * sizeof(char)));
//	printf("%s\n", expl);
//	return (0);
//}