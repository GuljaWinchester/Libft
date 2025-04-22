/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperedny <gperedny@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 13:55:05 by gperedny          #+#    #+#             */
/*   Updated: 2025/04/17 14:26:53 by gperedny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <stdio.h>

int	ft_isalnum(int c)
{
	return ((c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z') || (c >= 'a'
			&& c <= 'z'));
}
int	main(void)
{
	printf("%d\n", ft_isalnum('1'));
	printf("%d\n", ft_isalnum('=' - 1));
	printf("%d\n", isalnum('='));
	printf("%d\n", isalnum('s' - 1));
}