/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 18:19:05 by miggarc2          #+#    #+#             */
/*   Updated: 2024/09/12 18:46:01 by miggarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isalpha(int c);

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	printf("%s is %d\n", argv[1], isalpha(argv[1][0]));
	printf("%s is %d\n", argv[1], ft_isalpha(argv[1][0]));
	printf("%s is %d", argv[1], isalpha(argv[1][0]));
}
