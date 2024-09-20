/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstadd_front_bonus.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggarc2 <miggarc2@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 18:10:25 by miggarc2          #+#    #+#             */
/*   Updated: 2024/09/17 10:19:32 by miggarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new);

int	main(int argc, char **argv)
{
	t_list	*node;
	t_list	new;

	if (argc != 3)
		return (0);
	node = (t_list *)malloc(sizeof(t_list));
	node->content = (void *)argv[1];
	node->next = 0;
	new.content = (void *)argv[2];
	printf("%s", (char *)node->content);
	ft_lstadd_front(&node, &new);
	printf("%s", (char *)node->content);
	printf("%s", (char *)node->next->content);
	if (node->next->next == 0)
		printf("end");
}
