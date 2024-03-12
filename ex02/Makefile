# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/12 10:44:01 by joakoeni          #+#    #+#              #
#    Updated: 2024/03/12 13:42:03 by joakoeni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= AbominationMutante

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -g3

SRCS		= ./main.cpp\
			  ./Class/MutantStack/MutantStack.cpp\

OBJS		=		$(SRCS:.cpp=.o)

all			:		$(NAME)

$(NAME)		:		$(OBJS)
					$(CXX)  $(CXXFLAGS) $(OBJS) -o  $(NAME)

clean		:
					rm -rf $(OBJS)

fclean		:		clean
					rm -rf $(NAME)

re			:		fclean all

.PHONY		:		all	clean	fclean	re

