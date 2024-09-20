/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_strmapi.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggarc2 <miggarc2@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 18:10:25 by miggarc2          #+#    #+#             */
/*   Updated: 2024/09/16 19:35:52 by miggarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

static char	ft_increase(unsigned int i, char c)
{
	return (c += i);
}

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf("In %s\n", argv[1]);
	printf("Out %s\n", ft_strmapi(argv[1], ft_increase));
}
