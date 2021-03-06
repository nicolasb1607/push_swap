/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_three.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nburat-d <nburat-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 11:26:07 by nburat-d          #+#    #+#             */
/*   Updated: 2022/02/10 23:37:50 by nburat-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORT_THREE_H

# define SORT_THREE_H

# include <unistd.h>
# include <stdlib.h>
# include "../libft/libft.h"
# include "./push_swap.h"

void	sort_three(t_list **alst, t_lstmove **mlst);
int		is_sorted(t_list **alst);
int		pos_lowest(t_list **alst);

#endif