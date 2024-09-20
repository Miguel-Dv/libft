/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memmove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 18:19:05 by miggarc2          #+#    #+#             */
/*   Updated: 2024/09/19 14:25:24 by miggarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <unistd.h>

void	*ft_memmove(void *dest, const void *src, size_t n);

int	main(int argc, char **argv)
{
	int	size;

	size = 10;
	if (argc < 3)
		return (0);
	printf("Starts in %s and %s\n", argv[1], argv[2]);
	printf("memmove is %s\n", (char *)memmove(argv[2], argv[1], size));
	printf("ft_memmove is %s\n", (char *)ft_memmove(argv[1], argv[2], size));
	printf("Now is %s and %s\n", argv[1], argv[2]);
}
