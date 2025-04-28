/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gperedny <gperedny@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 17:21:40 by gperedny          #+#    #+#             */
/*   Updated: 2025/04/28 12:56:13 by gperedny         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	ft_isalpha(int c)
{
	return ((c >= 'a' && c <= 'z')) || ((c >= 'A' && c <= 'Z'));
}
//int	main(void)
//{
//	printf("%d\n", ft_isalpha('s'));
//	printf("%d\n", ft_isalpha('1' - 1));
//	printf("%d\n", isalpha('s'));
//	printf("%d\n", isalpha('1' - 1));
//	return (0);
//}