/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_striteri.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggarc2 <miggarc2@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 18:10:25 by miggarc2          #+#    #+#             */
/*   Updated: 2024/09/16 20:07:17 by miggarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void	ft_striteri(char *s, void (*f)(unsigned int, char *));

static void	ft_increase(unsigned int i, char *c)
{
	*c += i;
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf("In %s\n", argv[1]);
	ft_striteri(argv[1], ft_increase);
	printf("Out %s\n", argv[1]);
}
