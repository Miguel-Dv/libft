/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strnstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 18:19:05 by miggarc2          #+#    #+#             */
/*   Updated: 2024/09/19 15:19:20 by miggarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len);

int	main(int argc, char **argv)
{
	int	size;

	size = 10;
	if (argc < 3)
		return (0);
	printf("%s:%s= %s\n", argv[2], argv[1], strnstr(argv[1], argv[2], size));
	printf("%s:%s= %s\n", argv[2], argv[1], ft_strnstr(argv[1], argv[2], size));
}
