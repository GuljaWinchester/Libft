/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperedny <gperedny@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 13:45:12 by gperedny          #+#    #+#             */
/*   Updated: 2025/04/27 15:04:31 by gperedny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;

	i = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	while (i > 0 && s[i] != (char)c)
	{
		i--;
	}
	if (s[i] == (char)c)
	{
		return ((char *)(s + i));
	}
	return (NULL);
}
int	main(void)
{
	char s[] = "ByeBitch";
	int c = ' ';
	printf("mine %s\n", ft_strrchr(s, c));
	printf("your %s\n", strrchr(s, c));
	return (0);
}