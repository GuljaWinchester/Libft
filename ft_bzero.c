/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperedny <gperedny@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/22 14:09:26 by gperedny          #+#    #+#             */
/*   Updated: 2025/04/27 19:24:31 by gperedny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void	*ft_bzero(void *s, size_t n)
{
	unsigned char	*c;

	c = s;
	while (n > 0)
	{
		*c = 0;
		c++;
		n--;
	}
	return (s);
}
// int	main(void)
//{
//	char s[] = "ByeBitch";
//	printf("%s\n", s);
//	ft_bzero(s + 3, 3 * sizeof(char));
//	printf("%s\n", s);
//}