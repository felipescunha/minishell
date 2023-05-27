/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ctrl_d.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fecunha < fecunha@student.42.rio >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:14:36 by fecunha           #+#    #+#             */
/*   Updated: 2023/03/23 11:14:51 by fecunha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../minishell.h"

void	log_out_interface(char *read, t_env *env)
{
	if (read == NULL)
	{
		free(read);
		ft_free_matrix(env->env);
		free(env);
		clear_history();
		printf("\x1b[1A\033[3C exit\n");
		exit(0);
	}
}
