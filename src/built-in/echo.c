/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   echo.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fecunha < fecunha@student.42.rio >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 09:48:20 by fecunha           #+#    #+#             */
/*   Updated: 2023/03/23 11:20:10 by fecunha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../minishell.h"

int	ft_echo(char	**input)
{
	int	i;

	i = 1;
	if (!input[1])
	{
		printf("\n");
		return (0);
	}
	if (!ft_strncmp(input[1], "-n", ft_strlen("-n")))
		i++;
	while (input[i])
	{
		printf("%s", input[i]);
		if (input[i + 1])
			printf(" ");
		i++;
	}
	if (ft_strncmp(input[1], "-n", ft_strlen("-n")))
		printf("\n");
	return (0);
}
