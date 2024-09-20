/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strlen.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 18:19:05 by miggarc2          #+#    #+#             */
/*   Updated: 2024/09/12 21:43:05 by miggarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>

size_t	ft_strlen(const char *s);

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	printf("%s is %lu\n", argv[1], strlen(argv[1]));
	printf("%s is %lu\n", argv[1], ft_strlen(argv[1]));
}
