# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    defuse.sh                                          :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: maparmar <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/01/18 16:55:13 by maparmar          #+#    #+#              #
#    Updated: 2019/01/18 16:55:16 by maparmar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#/bin/sh
touch -r "bomb.txt" -A '-000001' "bomb.txt" && stat -r bomb.txt | cut -d ' ' -f9