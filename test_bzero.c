/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_bzero.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 18:19:05 by miggarc2          #+#    #+#             */
/*   Updated: 2024/09/19 13:47:29 by miggarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <unistd.h>

void	ft_bzero(void *s, size_t n);

int	main(int argc, char **argv)
{
	int	off;

	off = 2;
	if (argc < 3)
		return (0);
	printf("Starts in %s and %s\n", argv[1], argv[2]);
	bzero(argv[1], off);
	printf("With bzero is %s\n", &argv[1][off]);
	ft_bzero(argv[2], off);
	printf("With ft_bzero is %s\n", &argv[2][off]);
	printf("Ends in %s and %s\n", argv[1], argv[2]);
	write(1, argv[1], 7);
	write(1, argv[2], 7);
}
