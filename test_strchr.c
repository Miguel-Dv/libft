/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 18:19:05 by miggarc2          #+#    #+#             */
/*   Updated: 2024/09/19 23:42:27 by miggarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <unistd.h>

char	*ft_strchr(const char *s, int c);

int	main(int argc, char **argv)
{
	if (argc < 3)
		return (0);
	printf("%s: %s = %s\n", argv[1], argv[2], strchr(argv[2], argv[1][0]));
	printf("%s: %s = %s\n", argv[1], argv[2], ft_strchr(argv[2], argv[1][0]));
	write(1, "Test 2:\n", 8);
	printf("%s\n", ft_strchr(argv[1], 't' + 256));
	printf("%s\n", strchr(argv[1], 't' + 256));
	write(1, "Test 3:\n", 8);
	printf("%s\n", ft_strchr("teste", 1024));
	printf("%s\n", strchr("teste", 1024));
}
