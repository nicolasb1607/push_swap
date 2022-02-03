/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_function.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/02 16:47:01 by nburat-d          #+#    #+#             */
/*   Updated: 2022/02/03 18:21:34 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_function.h"

void	push_b(t_list **alst, t_list *stack_a, t_list **blst, t_list *stack_b)
{
	t_list *temp;
	
	temp = NULL;
	if (stack_a != NULL)
	{
		if(stack_b != NULL)
			temp = stack_b;
		stack_b = stack_a;
		stack_a = stack_a->next;
		stack_b->next = NULL;
		if(temp != NULL)
			stack_b->next = temp;
		*alst = stack_a;
		*blst = stack_b;
	}
}

void	push_a(t_list **alst, t_list *stack_a, t_list **blst, t_list *stack_b)
{
	t_list *temp;
	
	temp = NULL;
	if (stack_b != NULL)
	{
		if(stack_a != NULL)
			temp = stack_a;
		stack_a = stack_b;
		stack_b = stack_b->next;
		stack_a->next = NULL;
		if(temp != NULL)
			stack_a->next = temp;
		*alst = stack_a;
		*blst = stack_b;
	}
	
}