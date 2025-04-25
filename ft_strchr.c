/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperedny <gperedny@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 15:26:51 by gperedny          #+#    #+#             */
/*   Updated: 2025/04/25 17:08:36 by gperedny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strchr(const char *s, int c)
{
	unsigned int	i;
	char			sign;

	i = 0;
	sign = c;
	if (s == NULL)
		return (NULL);
	while (s[i] != '\0' && s[i] != sign)
		i++;
	if (s[i] == sign)
		return ((char *)(s + i));
	return (NULL);
}
int	main(void)
{
	char s[] = "ByeBitch";
	int c = 'i';
	printf("%s\n", ft_strchr(s, c));
	return (0);
}