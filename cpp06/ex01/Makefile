# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: f██████ <f██████@student.42lyon.fr>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/03 12:33:02 by f██████           #+#    #+#              #
#    Updated: 2023/12/31 00:27:20 by f██████          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# minimal color codes
END=$'\x1b[0m
GREEN=$'\x1b[32m
YELLOW=$'\x1b[33m

# objects
OBJS = $(SRCS:.cpp=.o)
SRCS = $(addprefix $(SRC_DIR)/, \
main.cpp serialize.cpp \
)

# headers
HEADERS = $(addprefix $(INC_DIR)/, \
main.hpp serialize.hpp data.hpp \
)

# directories
SRC_DIR	= ./sources
INC_DIR	= ./includes

# name and flags
MF = Makefile
CPP = c++
NAME = Serialization

ifeq ($(DEBUG), 1)
FLAGS = -std=c++98 -Wall -Wextra -Werror -g
else
FLAGS = -std=c++98 -Wall -Wextra -Werror
endif

all : $(NAME)

$(NAME) : $(MF) $(OBJS)
	@$(CPP) $(FLAGS) $(OBJS) -o $(NAME)
	@echo "\n${GREEN}> Compilation of $(NAME) is success 🎉${END}"

%.o : %.cpp $(HEADERS) $(MF)
	@/bin/echo -n .
	@$(CPP) $(FLAGS) -c $< -o $@ -I $(INC_DIR)

clean :
	@rm -f $(OBJS)
	@echo "${YELLOW}> All objects files of $(NAME) have been deleted ❌${END}"

fclean : clean
	@rm -f $(NAME)
	@echo "${YELLOW}> Cleaning of $(NAME) has been done ❌${END}"

re: fclean
	@make $(NAME)

.PHONY:	all clean fclean re