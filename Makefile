# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ryoshio- <ryoshio-@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/23 13:45:23 by lucasmar          #+#    #+#              #
#    Updated: 2023/03/30 00:06:57 by ryoshio-         ###   ########.fr        #
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
OBJ_PATH=./obj/

vpath %.c ./src ./src/aux ./src/check ./src/draw ./src/get ./src/window

SRC_FILES = cub3d.c\
	ft_check_arguments.c\
	ft_check_extension.c\
	ft_check_file_exists.c\
	ft_check_first_word_each_line.c\
	ft_check_line_position.c\
	ft_check_duplicated_flag.c\
	ft_check_cub_file.c\
	ft_check_rgb.c\
	ft_check_texture.c\
	ft_check_value_flag.c\
	ft_check_map.c\
	ft_check_wall.c\
	ft_init_window.c\
	ft_close_window.c\
	ft_event_window.c\
	ft_error_message.c\
	ft_free_cub.c\
	ft_free_one_point.c\
	ft_free_two_point.c\
	ft_read_all_file.c\
	ft_exit_two_point.c\
	ft_flag_code.c\
	ft_line_code.c\
	ft_get_map.c\
	ft_get_value.c\
	ft_distance.c\
	ft_distance_wall.c\
	ft_size_wall.c\
	ft_mlx_pixel_put.c\
	ft_radian_domain.c\
	ft_iswall.c\
	ft_move_and_turn.c\
	ft_raycast.c\
	ft_hook_window.c\
	ft_drawn.c\
	ft_mlx_pixel_get.c

	
OBJ= $(addprefix $(OBJ_PATH)/,$(SRC_FILES:.c=.o))



# compilation **************************************************************** #
CC=cc
FLAG=  -Wall -Werror -Wextra  -fsanitize=address
VALGRIND=valgrind -s --leak-check=full --track-origins=yes --show-leak-kinds=all 
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

fclean:		clean fcleanlib
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

run: all
	./cub3D ./maps/map_01.cub
#	$(VALGRIND) ./cub3D ./maps/map_01.cub

.PHONY: all clean fclean fcleanlib fcleanll re reall
