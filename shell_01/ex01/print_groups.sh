# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    print_groups.sh                                    :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/27 23:56:32 by wprintes          #+#    #+#              #
#    Updated: 2021/07/27 23:56:33 by wprintes         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

groups $FT_USER | tr ' ' ',' | tr -d '\n'