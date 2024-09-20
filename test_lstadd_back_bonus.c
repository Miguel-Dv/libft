/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstadd_back_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggarc2 <miggarc2@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 18:10:25 by miggarc2          #+#    #+#             */
/*   Updated: 2024/09/17 22:47:10 by miggarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	t_list	*node;
	t_list	new;
	t_list	new2;

	if (argc != 4)
		return (0);
	node = (t_list *)malloc(sizeof(t_list));
	node->content = (void *)argv[1];
	node->next = 0;
	new.content = (void *)argv[2];
	new.next = 0;
	new2.content = (void *)argv[3];
	new2.next = 0;
	printf("%s ", (char *)node->content);
	printf("%s\n", (char *)ft_lstlast(node)->content);
	ft_lstadd_back(&node, &new);
	printf("%s ", (char *)node->content);
	printf("%s\n", (char *)ft_lstlast(node)->content);
	ft_lstadd_back(&node, &new2);
	printf("%s ", (char *)node->content);
	printf("%s ", (char *)node->next->content);
	printf("%s ", (char *)node->next->next->content);
	printf("%s\n", (char *)ft_lstlast(node)->content);
}
