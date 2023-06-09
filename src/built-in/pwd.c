/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pwd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fecunha < fecunha@student.42.rio >         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 14:35:24 by fecunha           #+#    #+#             */
/*   Updated: 2023/03/23 11:46:51 by fecunha          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../minishell.h"

static void	free_pwd(char *temp, char *buff)
{
	free(temp);
	free(buff);
}

char	*pwd_util(char *buff, int size)
{
	while (!getcwd(buff, size))
	{
		free(buff);
		size++;
		buff = malloc(sizeof(char) * size);
	}
	return (buff);
}

int	ft_pwd(void)
{
	char	*buff;
	char	*temp;
	int		size;

	size = 1;
	buff = malloc(sizeof(char) * size);
	if (!buff)
		return (0);
	temp = getcwd(NULL, 0);
	if (!temp)
	{
		free_pwd(temp, buff);
		printf("cd: error retrieving current directory: ");
		printf("getcwd: cannot access parent directories:");
		printf("No such file, directory\n");
		return (0);
	}
	else
		buff = pwd_util(buff, size);
	printf("%s\n", buff);
	free_pwd(temp, buff);
	return (0);
}
