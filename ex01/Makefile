# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: joakoeni <joakoeni@student.42mulhouse.fr>  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/12 10:44:21 by joakoeni          #+#    #+#              #
#    Updated: 2024/03/12 10:44:23 by joakoeni         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= Span

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -g3

SRCS		= ./main.cpp\
			  ./Class/Span/Span.cpp\

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

