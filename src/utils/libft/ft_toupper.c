/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 11:45:05 by vipereir          #+#    #+#             */
/*   Updated: 2023/03/16 08:39:36 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

/*#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("output: %i\n", ft_toupper('g'));
	printf("output: %i\n", toupper('g'));
}*/
