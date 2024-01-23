/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ult_matjoin.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lamici <lamici@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 09:53:47 by abettini          #+#    #+#             */
/*   Updated: 2024/01/23 14:49:37 by lamici           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_ult_matjoin(int n, ...)
{
	va_list	ap;
	char	**tmp;
	char	**ret;

	va_start(ap, n);
	tmp = NULL;
	while (n > 0)
	{
		ret = ft_matjoin(tmp, va_arg(ap, char **));
		ft_kill_matrix(tmp);
		tmp = ret;
		n--;
	}
	return (ret);
}
