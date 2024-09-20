/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcpy.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 18:19:05 by miggarc2          #+#    #+#             */
/*   Updated: 2024/09/19 14:40:06 by miggarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <bsd/string.h>
#include <unistd.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t n);

int	main(int argc, char **argv)
{
	size_t	size;

	size = 22;
	if (argc < 4)
		return (0);
	printf("In %s, %s and %s\n", argv[1], argv[2], argv[3]);
	printf("strlcpy size %lu\n", strlcpy(argv[3], argv[1], size));
	printf("Then %s, %s and %s\n", argv[1], argv[2], argv[3]);
	printf("ft_strlcpy size %lu\n", ft_strlcpy(argv[3], argv[2], size));
	printf("Then %s, %s and %s\n", argv[1], argv[2], argv[3]);
}
