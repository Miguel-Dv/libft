/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strncmp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 18:19:05 by miggarc2          #+#    #+#             */
/*   Updated: 2024/09/19 22:10:52 by miggarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>
#include <unistd.h>

int	ft_strncmp(char *s1, const char *s2, size_t n);

int	main(int argc, char **argv)
{
	size_t	size;

	size = 6;
	if (argc < 3)
		return (0);
	printf("In %s and %s\n", argv[1], argv[2]);
	printf("strncmp is %d\n", strncmp(argv[1], argv[2], size));
	printf("ft_strncmp is %d\n", ft_strncmp(argv[1], argv[2], size));
	write(1, "test2:\n", 7);
	printf("%d\n", ft_strncmp("test\200", "test\0", 6));
	printf("%d\n", strncmp("test\200", "test\0", 6));
	write(1, "test3:\n", 7);
	printf("%d\n", ft_strncmp("test\0", "test\t", 6));
	printf("%d\n", strncmp("test\0", "test\t", 6));
	write(1, "test4:\n", 7);
	printf("%d\n", ft_strncmp("test", "test\0", 6));
	printf("%d\n", strncmp("test", "test\0", 6));
	write(1, "test5:\n", 7);
	printf("%d\n", ft_strncmp("test", "testss", 6));
	printf("%d\n", strncmp("test", "testss", 6));
	write(1, "test6:\n", 7);
	printf("%d\n", ft_strncmp("test\0", "test\200", 6));
	printf("%d\n", strncmp("test\0", "test\200", 6));
	write(1, "test7:\n", 7);
	printf("%d\n", ft_strncmp("abcdefgh", "abcdwxyz", 4));
	printf("%d\n", strncmp("abcdefgh", "abcdwxyz", 4));
	write(1, "test8:\n", 7);
	printf("%d\n", ft_strncmp("1234", "1235", 3));
	printf("%d\n", strncmp("1234", "1235", 3));
	write(1, "testi9:\n", 7);
	char *big = "abcdef";
 	char *little = "abcdefghijklmnop";
 	size_t size2 = 6;
 	int i1 = ((strncmp(big, little, size2) > 0) ? 1 : ((strncmp(big, little, size2) < 0) ? -1 : 0));
 	int i2 = ((ft_strncmp(big, little, size2) > 0) ? 1 : ((ft_strncmp(big, little, size2) < 0) ? -1 : 0));
  	if (i1 == i2)
 		write(1, "ok", 2);
	else
		write(1, "fail", 4);
}
