/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_calloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggarc2 <miggarc2@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 18:10:25 by miggarc2          #+#    #+#             */
/*   Updated: 2024/09/15 19:08:06 by miggarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	*ft_calloc(size_t nmemb, size_t size);

int	main(int argc, char **argv)
{
	int		i;
	char	*str;
	size_t	nmemb;
	size_t	size;

	if (argc > 1)
		return (0);
	i = 0;
	argv += 0;
	nmemb = 2147479528;
	size = sizeof(char);
	str = (char *)ft_calloc(nmemb, size);
	while (str[i] == 0)
		str[i++] = 66;
	write(1, str, nmemb * size);
	i = 0;
	str = (char *)calloc(nmemb, size);
	while (str[i] == 0)
		str[i++] = 69;
	write(1, str, nmemb * size);
}
