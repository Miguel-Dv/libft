/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_itoa.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggarc2 <miggarc2@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 18:10:25 by miggarc2          #+#    #+#             */
/*   Updated: 2024/09/20 21:16:55 by miggarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <time.h>

char	*ft_itoa(int n);

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf("In %s\n", argv[1]);
	write(1, "Test 2:\n", 8);
	printf("Out %s\n", ft_itoa(489100827));
	write(1, "Test 3:\n", 8);
	srand(clock());
 	int n;
 	char *d;

 	for (int i = 0; i < 2000; i++)
 	{
 		n = rand();
 		d = ft_itoa(n);
 		if (atoi(d) != n)
 		{
 			write(1, "fail", 4);
			return(0);
 		}
 	}
 	write(1, "ok\n", 2);
	char *i1 = ft_itoa(2147483647);
	printf("%s y %s", i1, "2147483647");
}
