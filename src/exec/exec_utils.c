/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exec_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vipereir <vipereir@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/21 11:16:00 by vipereir          #+#    #+#             */
/*   Updated: 2023/03/23 12:11:21 by vipereir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../minishell.h"

int	check_dir(char	*path)
{
	DIR	*check;

	check = opendir(path);
	if (check == NULL)
		return (1);
	closedir(check);
	return (0);
}
