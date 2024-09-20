/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_putchar_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggarc2 <miggarc2@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 18:10:25 by miggarc2          #+#    #+#             */
/*   Updated: 2024/09/16 20:38:33 by miggarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <fcntl.h>

void	ft_putchar_fd(char c, int fd);

int	main(int argc, char **argv)
{
	int	fd;
	int	i;

	if (argc != 3)
		return (0);
	i = 0;
	fd = open(argv[1], O_WRONLY);
	if (fd == -1)
	{
		write(1, "Error openning file.\n", 21);
	}
	while (argv[2][i])
		ft_putchar_fd(argv[2][i++], fd);
	close(fd);
}
