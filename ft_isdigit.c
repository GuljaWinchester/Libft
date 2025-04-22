/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperedny <gperedny@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 17:52:29 by gperedny          #+#    #+#             */
/*   Updated: 2025/04/21 17:16:58 by gperedny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isdigit(int c)
{
	if (!((c >= '0') && (c <= '9')))
	{
		return (0);
	}
	return (1);
}

// int	main(void)
//{
//	printf("%d\n", ft_isdigit('1'));
//	printf("%d\n", ft_isdigit('s' - 1));
//	printf("%d\n", isdigit('1'));
//	printf("%d\n", isdigit('s' - 1));
//}