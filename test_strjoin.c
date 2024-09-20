/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strjoin.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggarc2 <miggarc2@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 18:10:25 by miggarc2          #+#    #+#             */
/*   Updated: 2024/09/19 00:12:03 by miggarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	*ft_strjoin(char const *s1, char const *s2);

int	main(int argc, char **argv)
{
	char	*test;

	if (argc != 3)
		return (0);
	test = "the nyancat";
	printf("%s and %s\n", argv[1], argv[2]);
	printf("%s\n", ft_strjoin(argv[1], argv[2]));
	printf("%s\n", ft_strjoin(ft_strjoin(argv[1], argv[2]), test));
}
