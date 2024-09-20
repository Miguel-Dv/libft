/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_split.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggarc2 <miggarc2@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 18:10:25 by miggarc2          #+#    #+#             */
/*   Updated: 2024/09/16 18:13:51 by miggarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	**ft_split(char const *s, char c);

int	main(int argc, char **argv)
{
	char	**split;
	int		i;

	if (argc != 3)
		return (0);
	i = 0;
	split = ft_split(argv[1], argv[2][0]);
	printf("%s and %s\n", argv[1], argv[2]);
	while (split[i])
		printf("%s\n", split[i++]);
}
