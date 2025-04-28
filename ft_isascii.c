/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperedny <gperedny@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 14:35:04 by gperedny          #+#    #+#             */
/*   Updated: 2025/04/28 12:56:06 by gperedny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	return ((c >= 0 && c <= 256));
}
// int	main(void)
//{
//	printf("%d\n", ft_isascii('p'));
//	printf("%d\n", ft_isascii('=' - 1));
//	printf("%d\n", isascii('p'));
//	printf("%d\n", isascii('s' - 1));
//}