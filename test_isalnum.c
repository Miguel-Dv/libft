/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_isalnum.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggarc2 <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 18:19:05 by miggarc2          #+#    #+#             */
/*   Updated: 2024/09/12 19:02:46 by miggarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isalnum(int c);

int	main(int argc, char **argv)
{
	if (argc < 2)
		return (0);
	printf("%s is %d\n", argv[1], isalnum(argv[1][0]));
	printf("%s is %d\n", argv[1], ft_isalnum(argv[1][0]));
}
