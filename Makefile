# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/23 13:45:23 by lucasmar          #+#    #+#              #
#    Updated: 2023/03/02 20:38:47 by lucasmar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# libs *********************************************************************** #
LIBFT_PATH =	./libs/libft/
LIB_MLX_PATH =	./libs/mlx_linux/

MLX_MAKE = 		$(LIB_MLX_PATH)libmlx.a
LIBFT =			$(LIBFT_PATH)libft.a
HEADERS_PATH=	./includes/

MLXFLAGS =	-L$(LIB_MLX_PATH) -lmlx_Linux -I$(LIB_MLX_PATH) \
			-L/usr/lib -lXext -lX11 -lm -lz

# inputs ********************************************************************* #
NAME=cub3D

SRC_PATH=./src/
OBJ_PATH=./obj

SRC_FILES=cub3d.c\

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
		  ft_check_texture.c\
		  ft_check_value_flag.c\
		  ft_get_map.c\
		  ft_check_map.c\
		  ft_check_wall.c\
		  ft_get_value.c\
		  ft_free_cub.c\
		  ft_init_windown.c\
		  ft_close_window.c\
		  ft_event_window.c\
		  ft_render_window.c\


SRC=$(addprefix $(SRC_PATH)/, $(SRC_FILES))
OBJ=$(SRC:$(SRC_PATH)/%.c=$(OBJ_PATH)/%.o)

# compilation **************************************************************** #
CC=cc
FLAG= -Wall -Werror -Wextra
VALGRIND=valgrind --leak-check=full ---quiethow-leak-kinds=all  --track-origins=yes
# clean ********************************************************************** #
RM=-rm -f
RM_DIR=rm -rf
# rules ********************************************************************** #
all:	$(NAME)

$(OBJ_PATH)/%.o:	$(SRC_PATH)/%.c
	@mkdir -p $(OBJ_PATH)
	@$(CC) $(FLAG) -I $(HEADERS_PATH) -c $< -o $@

$(NAME): $(LIBFT) $(OBJ) $(MLX_MAKE)
		@$(CC) $(FLAG) -I $(HEADERS_PATH) -o $@ $(OBJ) \
		$(LIBFT) $(MLXFLAGS)
# message in terminal ************ #
		@echo "\033[1;32m"
		@echo "	Cub3D created ✓"
		@echo "\033[0m"
		@echo "\033[0;33m	Welcome to Cub3D by lucasmar and ryoshio-'s 42sp \033[0m"
		@echo "\033[0;39m"
		@echo "	run ./cub3D + map.cub in the terminal !"
		@echo "	ex: ./cub3D ./maps/map_01.cub "
		@echo "\033[0m"

$(LIBFT):
	@cd $(LIBFT_PATH) && $(MAKE)

$(MLX_MAKE):
	@cd $(LIB_MLX_PATH) && $(MAKE)

clean:
		@$(RM_DIR) $(OBJ_PATH)
		@echo "\033[0;31m       ▥ Cub3D objects clean ✓ \033[0m"

fclean:		clean
		@$(RM) $(NAME)
		@echo "\033[0;31m       ▥ Cub3D clean ✓ \033[0m"

fcleanlib:
	@cd $(LIBFT_PATH) && $(MAKE) fclean
	@cd $(LIB_MLX_PATH) && $(MAKE) clean
	@echo "\033[0;31m       ▥ libs and lib_mlx clean ✓ \033[0m"

fcleall: fcleanlib fclean
		 @echo "\033[0;31m       ▥ libs and Cub3D clean ✓ \033[0m"

re:			fclean all

reall:		fcleanlib re

.PHONY: all clean fclean fcleanlib fcleanll re reall
