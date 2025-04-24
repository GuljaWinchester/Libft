/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperedny <gperedny@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:39:26 by gperedny          #+#    #+#             */
/*   Updated: 2025/04/24 15:06:37 by gperedny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	
}
int	main(void)
{
	char	d[15] = "Bye";
	char	s[] = "Bitch";

	strlcat(d, s, 101);
	printf("%s\n", d);
	return (0);
}
