/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memset.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 18:19:05 by miggarc2          #+#    #+#             */
/*   Updated: 2024/09/19 13:28:06 by miggarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <unistd.h>
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n);

int	main(int argc, char **argv)
{
	int	size;

	size = 3;
	if (argc < 4)
		return (0);
	printf("Starts in %s and %s\n", argv[1], argv[2]);
	memset(argv[1], argv[3][0], size);
	printf("With memset is %s\n", argv[1]);
	ft_memset(argv[2], argv[3][0], size);
	printf("With ft_memset is %s\n", argv[2]);
	printf("Ends in %s and %s\n", argv[1], argv[2]);
	write(1, argv[1], ft_strlen(argv[1]));
	write(1, argv[2], ft_strlen(argv[2]));
}
