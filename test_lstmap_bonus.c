/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_lstmap_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miggarc2 <miggarc2@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 18:10:25 by miggarc2          #+#    #+#             */
/*   Updated: 2024/09/18 19:49:02 by miggarc2         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <string.h>
#include <stdio.h>
#include "libft.h"

void	*ft_f(void *content)
{
	unsigned char	*tmp;

	tmp = (unsigned char *)content;
	*tmp = 'A';
	return (tmp);
}

void	ft_del(void *content)
{
	unsigned char	*tmp;

	tmp = (unsigned char *)content;
	*tmp = 0;
}

int	main(int argc, char **argv)
{
	t_list	*node;
	t_list	*new;
	t_list	*new2;

	if (argc != 4)
		return (0);
	node = (t_list *)malloc(sizeof(t_list));
	new = (t_list *)malloc(sizeof(t_list));
	new2 = (t_list *)malloc(sizeof(t_list));
	node->content = (void *)argv[1];
	node->next = 0;
	new->content = (void *)argv[2];
	new->next = 0;
	new2->content = (void *)argv[3];
	new2->next = 0;
	ft_lstadd_back(&node, new);
	ft_lstadd_back(&node, new2);
	ft_lstmap(node, ft_f, ft_del);
	printf("%s ", (char *)node->content);
	printf("%s ", (char *)node->next->content);
	printf("%s ", (char *)new2->content);
	printf("%s\n", (char *)ft_lstlast(node)->content);
}
