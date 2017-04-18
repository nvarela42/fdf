
SYS := $(shell clang -dumpmachine)

CC			=	gcc

NAME		=	fdf

LNAME		=	ft

DIR			=	lib$(LNAME)

DIRMLX		=	minilibx

HDR			=	$(DIR)/$(DIR).a

SRC			=	main.c\
				ft_error.c\
				ft_static.c\
				ft_read_fd.c\
				ft_start_prog.c\
				ft_data_processing.c\
				ft_search_coord.c\
				ft_mlx_init.c\
				ft_start_for_draw.c\
				ft_drawline.c\
				ft_putpix_image.c\
				ft_size_for_win.c\
				ft_manage_events.c\
				ft_position_events.c\
				ft_height_events.c\

OBJ			=	$(patsubst %.c,srcs/%.o,$(SRC))

LFLAGS		=	-L$(DIR) -l$(LNAME)

WFLAGS 		=	-Wall -Wextra -Werror

CFLAGS1		=	$(WFLAGS) -I./includes/ -I./$(DIR) -I./$(DIRMLX)

OFLAGS		=	 -g

ifneq (, $(findstring linux, $(SYS)))
	MLXFLAG		= -L./$(DIRMLX) -I./$(DIRMLX) -lmlx -lXext -lX11 -lm
else
	MLXFLAG		= -L/usr/local/lib/ -I/usr/local/include -lmlx -framework OpenGL -framework AppKit -lm
endif

HDR			=	$(DIR)/$(DIR).a

CFLAGS		=	$(CFLAGS1) $(OFLAGS)

all:		$(NAME) $(HDR)

$(NAME):	$(OBJ) $(HDR)
			make -C $(DIRMLX)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJ) $(LFLAGS) $(MLXFLAG)

%.o: %.c
	$(CC) $(CFLAGS)  -c -o $@ $^

$(HDR):
		make -C $(DIR)

clean:
		make -C $(DIR) clean
		rm -f $(OBJ)

fclean:		clean
		make -C $(DIR) fclean
		make -C $(DIRMLX) clean
		rm -f $(NAME) $(HDR)

re:			fclean all

.PHONY: all clean fclean re
