
# --- Makefile structure ---

## Program Name:
NAME	=	megaphone
EXT		=	.cpp

## Folder Structure:
SRCDIR		=	src
OBJDIR		=	obj
BINDIR		=	bin

## Libraries:
LIBS	=	# N/A

## Header Files (dedicated and from libraries):
HEADERS	=	#-I ./inc

## Source / Object Files:
SRC		=	$(wildcard $(SRCDIR)/*$(EXT))
OBJ		=	$(SRC:$(SRCDIR)/%$(EXT)=$(OBJDIR)/%.o)


## Compilation flags:
CC			=	c++
CFLAGS		=	-Wall -Wextra -Werror #-g3 -fsanitize=address
RM			=	rm -rf

# *************************************************************************** #

# --- Makefile Extras ---

## Colors:
DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;31m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

# *************************************************************************** #

# --- Makefile instructions ---

all:		$(NAME)

$(NAME):	$(OBJ)
			@mkdir -p $(BINDIR)
			@$(CC) $(CFLAGS) $(OBJ) $(LIBS) $(HEADERS) -o ./$(BINDIR)/$(NAME)
			@echo "$(GREEN)$(NAME) compiled!$(DEF_COLOR)"

$(OBJDIR)/%.o: $(SRCDIR)/%$(EXT)
			@mkdir -p $(OBJDIR)
			@printf "$(BLUE)Compiling: $< ...$(DEF_COLOR)"
			@$(CC) $(CFLAGS) -o $@ -c $< $(HEADERS)
			@echo "$(GREEN)Done!$(DEF_COLOR)"

clean:
			@$(RM) $(OBJ) $(OBJDIR)
			@echo "$(YELLOW)$(NAME) object files removed!$(DEF_COLOR)"

fclean:
			@if [ -d $(OBJDIR) ]; then \
				$(RM) $(OBJ) $(OBJDIR); \
				echo "$(YELLOW)$(NAME) object files removed!$(DEF_COLOR)"; \
			fi
			@$(RM) $(NAME) $(BINDIR)
			@echo "$(RED)$(NAME) removed!$(DEF_COLOR)"

re:			fclean all

.PHONY:		all clean fclean re
