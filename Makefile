# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lucasmar < lucasmar@student.42sp.org.br    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/23 13:45:23 by lucasmar          #+#    #+#              #
#    Updated: 2023/03/14 18:14:41 by lucasmar         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# libs *********************************************************************** #
LIBFT_PATH =	./libs/libft/
LIB_MLX_PATH =	./libs/mlx_linux/

SRC_PATH=./src/
OBJ_PATH=./obj
OBJ_FOLDER=./obj/check ./obj/window ./obj/draw ./obj/aux ./obj/get
SRC_FILES=cub3d.c\

vpath %.c ./src ./src/check

MLX_MAKE = 		$(LIB_MLX_PATH)libmlx.a
LIBFT =			$(LIBFT_PATH)libft.a
HEADERS_PATH=	./includes/

MLXFLAGS =	-L$(LIB_MLX_PATH) -lmlx_Linux -I$(LIB_MLX_PATH) \
			-L/usr/lib -lXext -lX11 -lm -lz

# inputs ********************************************************************* #
NAME=cub3D

SRC_FILES+=./check/ft_check_arguments.c\
		  ./check/ft_check_extension.c\
		  ./check/ft_check_file_exists.c\
		  ./check/ft_check_first_word_each_line.c\
		  ./check/ft_check_line_position.c\
		  ./check/ft_check_duplicated_flag.c\
		  ./check/ft_check_cub_file.c\
		  ./check/ft_check_rgb.c\
		  ./check/ft_check_texture.c\
		  ./check/ft_check_value_flag.c\
		  ./check/ft_check_map.c\
		  ./check/ft_check_wall.c\
		  ./window/ft_init_window.c\
		  ./window/ft_close_window.c\
		  ./window/ft_event_window.c\
		  ./window/ft_render_window.c\
		  ./aux/ft_error_message.c\
		  ./aux/ft_free_cub.c\
		  ./aux/ft_free_one_point.c\
		  ./aux/ft_free_two_point.c\
		  ./aux/ft_read_all_file.c\
		  ./aux/ft_exit_two_point.c\
		  ./aux/ft_flag_code.c\
		  ./aux/ft_line_code.c\
		  ./get/ft_get_map.c\
		  ./get/ft_get_value.c\
		  ./draw/ft_distance.c\
		  ./draw/ft_distance_wall.c\
		  ./draw/ft_size_wall.c\
		  ./draw/ft_ray_casting.c\
		  ./draw/ft_mlx_pixel_put.c\
		  ./draw/ft_angle_correction.c


SRC=$(addprefix $(SRC_PATH)/, $(SRC_FILES))
OBJ=$(SRC:$(SRC_PATH)/%.c=$(OBJ_PATH)/%.o)
OBJS=$(addprefix $(PATH_OBJ),$(SOURCES:%.c=%.o))
# compilation **************************************************************** #
CC=cc
FLAG= -Wall -Werror -Wextra  -fsanitize=address
VALGRIND=valgrind --leak-check=full ---quiethow-leak-kinds=all  --track-origins=yes
# clean ********************************************************************** #
RM=-rm -f
RM_DIR=rm -rf
# rules ********************************************************************** #
all:	$(NAME)

$(OBJ_PATH)/%.o:	$(SRC_PATH)/%.c
	@mkdir -p $(OBJ_PATH) $(OBJ_FOLDER)
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
