/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strrchr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 18:19:05 by miggarc2          #+#    #+#             */
/*   Updated: 2024/09/19 21:30:01 by miggarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <unistd.h>

char	*ft_strrchr(const char *s, int c);

int	main(int argc, char **argv)
{
	char *str;

	str = "bonjour";
	if (argc < 3)
		return (0);
	printf("%c:%s=%s\n", argv[1][0], argv[2], strrchr(argv[2], argv[1][0]));
	printf("%c:%s=%s\n", argv[1][0], argv[2], ft_strrchr(argv[2], argv[1][0]));
	printf("test2:\n");
	if (!(ft_strrchr(str + 5, 'o')))
		printf("NULL\n");
	else
		printf("%s", str);
	write(1, "test3:\n", 7);
	printf("%s\n", ft_strrchr(argv[2], 't' + 256));
	printf("%s\n", strrchr(argv[2], 't' + 256));
}
