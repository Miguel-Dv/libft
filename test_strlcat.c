/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlcat.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 18:19:05 by miggarc2          #+#    #+#             */
/*   Updated: 2024/09/19 19:26:03 by miggarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>
#include <unistd.h>

size_t	ft_strlcat(char *dst, const char *src, size_t n);

void	main()
{
	char	dest[20];

	dest[10] = 'a';
	printf("%lu\n", strlcat(dest, "", 0));
	write(1, dest, 15);
	write(1, "\n", 1);
	printf("%lu\n", ft_strlcat(dest, "lorem ipsum dolor sit amet", 0));
	write(1, dest, 15);
}
