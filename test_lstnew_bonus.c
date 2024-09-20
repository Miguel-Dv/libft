/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstnew_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggarc2 <miggarc2@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 18:10:25 by miggarc2          #+#    #+#             */
/*   Updated: 2024/09/17 00:34:47 by miggarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <fcntl.h>
#include "libft.h"

t_list	*ft_lstnew(void *content);

int	main(int argc, char **argv)
{
	if (argc != 2)
		return (0);
	printf("%s", (char *)ft_lstnew(argv[1])->content);
}
