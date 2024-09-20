/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memcpy.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 18:19:05 by miggarc2          #+#    #+#             */
/*   Updated: 2024/09/19 22:05:20 by miggarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <unistd.h>
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n);

int	main(int argc, char **argv)
{
	int	size;

	size = 7;
	if (argc < 4)
		return (0);
	printf("Starts in %s, %s and %s\n", argv[1], argv[2], argv[3]);
	printf("ft_memcpy is %s\n", (char *)ft_memcpy(argv[3], argv[1], size));
	printf("memcpy is %s\n", (char *)memcpy(argv[3], argv[2], size));
	write(1, "Test 2:\n", 8);
	printf("%s\n", (char *)ft_memcpy("", "", 6));
//	printf("%s\n", (char *)memcpy("", "", 6));
	write(1, "Test 3:\n", 8);
	printf("%s\n", (char *)ft_memcpy(((void*)0), ((void*)0), 3));
//	printf("%s\n", (char *)memcpy(((void*)0), ((void*)0), 3));

}
