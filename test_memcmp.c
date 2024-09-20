/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcmp.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 18:19:05 by miggarc2          #+#    #+#             */
/*   Updated: 2024/09/19 21:04:25 by miggarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>
#include <unistd.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n);

int	main(int argc, char **argv)
{
	size_t	size;

	size = 10;
	if (argc < 3)
		return (0);
	printf("In %s and %s\n", argv[1], argv[2]);
	printf("memcmp is %d\n", memcmp(argv[1], argv[2], size));
	printf("ft_memcmp is %d\n", ft_memcmp(argv[1], argv[2], size));
	printf("%d\n", ft_memcmp("abcdefghij", "abcdefgxyz", 7));
	printf("%d\n", memcmp("abcdefghij", "abcdefgxyz", 7));
}
