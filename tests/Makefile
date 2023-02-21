# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/21 20:37:02 by ryoshio-          #+#    #+#              #
#    Updated: 2023/02/21 18:17:13 by ryoshio-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# libs *********************************************************************** #
LIBFT_PATH =	../libs/libft/
LIB_MLX_PATH =	../libs/mlx_linux/

MLX_MAKE = 		$(LIB_MLX_PATH)libmlx.a
LIBFT =			$(LIBFT_PATH)libft.a
HEADERS_PATH=	../includes/

MLXFLAGS =	-L$(LIB_MLX_PATH) -lmlx_Linux -I$(LIB_MLX_PATH) \
			-L/usr/lib -lXext -lX11 -lm -lz

# inputs ********************************************************************* #
NAME=teste

SRC_PATH=../src/
TESTS_PATH=./src/
OBJ_PATH=./obj

vpath %.c ./src ../src


#Aqui coloca o arquivo teste

#teste especial
SRC_FILES=main_test.c\
	test_check_extension.c\
	test_check_file_exists.c\
	test_read_all_file.c\
	test_line_code.c\
	test_check_first_word_each_line.c\
	test_check_duplicated_flag.c\
	test_check_line_position.c\
	test_check_value_flag.c\
	test_get_map.c\
	test_check_map.c\

#


# Aqui colocar o arquivo do cub ("menos o arquivo que contem a main")
SRC_FILES+=ft_check_arguments.c\
		  ft_check_extension.c\
		  ft_check_file_exists.c\
		  ft_error_message.c\
		  ft_free_one_point.c\
		  ft_free_two_point.c\
		  ft_read_all_file.c\
		  ft_flag_code.c\
		  ft_line_code.c\
		  ft_check_first_word_each_line.c\
		  ft_check_line_position.c\
		  ft_check_duplicated_flag.c\
		  ft_exit_two_point.c\
		  ft_check_cub_file.c\
		  ft_check_rgb.c\
		  ft_check_texure.c\
		  ft_check_value_flag.c\
		  ft_get_map.c\
		  ft_check_map.c\
		  ft_check_wall.c 
		










OBJ= $(addprefix $(OBJ_PATH)/,$(SRC_FILES:.c=.o))
# compilation **************************************************************** #
CC=cc
FLAG= -Wall -Werror -Wextra
VALGRIND= valgrind -s --leak-check=full --show-leak-kinds=all

# clean ********************************************************************** #
RM=-rm -f
RM_DIR=rm -rf
# rules ********************************************************************** #
all:	$(NAME)

$(OBJ_PATH)/%.o: %.c
	@mkdir -p $(OBJ_PATH)
	@$(CC) $(FLAG) -I $(HEADERS_PATH) -c $< -o $@

$(NAME): $(LIBFT) $(OBJ) $(MLX_MAKE)
		@$(CC) $(FLAG) -I $(HEADERS_PATH) -o $@ $(OBJ) \
		$(LIBFT) $(MLXFLAGS)
# message in terminal ************ #
		@echo "\033[1;32m"
		@echo "	Test created ✓"
		@echo "\033[0m"
		@echo "\033[0;33m	Welcome to Test c by lucasmar and ryoshio-'s 42sp \033[0m"
		@echo "\033[0;39m"
		@echo "\033[0m"

$(LIBFT):
	@cd $(LIBFT_PATH) && $(MAKE)

$(MLX_MAKE):
	@cd $(LIB_MLX_PATH) && $(MAKE)

run: all
	$(VALGRIND) ./teste


clean:
		@$(RM_DIR) $(OBJ_PATH)
		@echo "\033[0;31m       ▥ Test  objects clean ✓ \033[0m"

fclean:		clean
		@$(RM) $(NAME)
		@echo "\033[0;31m       ▥ Test  clean ✓ \033[0m"

fcleanlib:
	@cd $(LIBFT_PATH) && $(MAKE) fclean
	@cd $(LIB_MLX_PATH) && $(MAKE) clean
	@echo "\033[0;31m       ▥ libs and lib_mlx clean ✓ \033[0m"

fcleall: fcleanlib fclean
		 @echo "\033[0;31m       ▥ libs and Cub3D clean ✓ \033[0m"

re:			fclean all

reall:		fcleanlib re

.PHONY: all clean fclean fcleanlib fcleanll re reall
