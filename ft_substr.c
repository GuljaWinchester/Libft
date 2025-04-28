/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperedny <gperedny@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 11:22:09 by gperedny          #+#    #+#             */
/*   Updated: 2025/04/28 12:56:53 by gperedny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	i;

	i = ft_strlen(s);
	if (!s)
		return (NULL);
	else if (start > i)
		return (ft_strdup(""));
	if (len > (i + start))
		len = (i + start);
	str = malloc(sizeof(char *) * len + 1);
	if (!str)
		return (NULL);
	i = 0;
	while (i < len)
	{
		str[i] = s[start + i];
		i++;
	}
	return (str);
}
// int	main(void)
//{
//	char s[] = "ByeBitch";
//	printf("%s\n", ft_substr(s, 10, 3));
//	return (0);
//}