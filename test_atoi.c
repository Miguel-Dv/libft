/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_atoi.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 18:19:05 by miggarc2          #+#    #+#             */
/*   Updated: 2024/09/14 22:47:15 by miggarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <bsd/string.h>
#include <stdlib.h>

int	ft_atoi(const char *nptr);

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	printf("%s is %d\n", argv[1], atoi(argv[1]));
	printf("%s is %d\n", argv[1], ft_atoi(argv[1]));
	printf("%s is %d\n", "atoi", atoi("  \t \f \n -34"));
	printf("%s is %d\n", "ft_atoi", ft_atoi("  \t \f \n -34"));
}
