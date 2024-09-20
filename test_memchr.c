/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_memchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 18:19:05 by miggarc2          #+#    #+#             */
/*   Updated: 2024/09/19 21:40:19 by miggarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <unistd.h>

void	*ft_memchr(const void *s, int c, size_t n);

int	main(int argc, char **argv)
{
	int		size;
	char	*test1;
	char	*test2;
	int		tab[7] = {-49, 2, 49, -1, 0, -2, 2};

	size = 10;
	if (argc < 3)
		return (0);
	test1 = (char *)memchr(argv[1], argv[2][0], size);
	printf("%s: %s = %s\n", argv[2], argv[1], test1);
	test2 = (char *)ft_memchr(argv[1], argv[2][0], size);
	printf("%s: %s = %s\n", argv[2], argv[1], test2);
	write(1, "test2:\n", 7);
	printf("%s\n", (char *)ft_memchr(tab, -1, 7));
	printf("%s\n", (char *)memchr(tab, -1, 7));
	write(1, "test3:\n", 7);
	printf("%s\n", (char *)ft_memchr(tab, 2 + 256, 3));
	printf("%s\n", (char *)memchr(tab, 2 + 256, 3));
}
