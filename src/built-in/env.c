/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   env.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fecunha < fecunha@student.42.rio >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 18:07:34 by fecunha           #+#    #+#             */
/*   Updated: 2023/03/23 11:20:02 by fecunha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../minishell.h"

int	ft_env(t_env *env, char **input)
{
	int	i;

	i = 0;
	if (array_counter(input) != 1)
	{
		printf("only env with no options or arguments\n");
		return (-127);
	}
	while (env->env[i])
		printf("%s\n", env->env[i++]);
	return (0);
}
