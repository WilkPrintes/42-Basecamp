# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    MAC.sh                                             :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: wprintes <wprintes@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/07/27 23:56:47 by wprintes          #+#    #+#              #
#    Updated: 2021/07/27 23:56:48 by wprintes         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

ifconfig -a | grep "ether" | tr " " "\n" | grep ":"