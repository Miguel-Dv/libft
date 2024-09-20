/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_substr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggarc2 <miggarc2@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 18:10:25 by miggarc2          #+#    #+#             */
/*   Updated: 2024/09/15 21:50:02 by miggarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	*ft_substr(char const *s, unsigned int start, size_t len);

int	main(int argc, char **argv)
{
	unsigned int	start;
	size_t			len;

	if (argc != 2)
		return (0);
	start = 10;
	len = 0;
	printf("%s\n", argv[1]);
	printf("%s\n", ft_substr(argv[1], start, len));
}
