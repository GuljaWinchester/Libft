/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperedny <gperedny@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 13:06:40 by gperedny          #+#    #+#             */
/*   Updated: 2025/04/28 18:36:27 by gperedny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;
	char	*res;

	i = ft_strlen(s1);
	j = ft_strlen(s2);
	res = malloc(sizeof(char *) * (i + j + 1));
	if (!res)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i])
	{
		res[i] = s1[i];
		i++;
	}
	while (s2[j])
		res[i++] = s2[j++];
	return (res);
}
// int	main(void)
//{
//	char *s11 = "Bye";
//	char *s22 = "Bitch";
//	printf("%s\n", ft_strjoin(s11, s22));
//	return (0);
//}