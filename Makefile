### VARIABLES ###

# Names
LIB = 	datalib.a

# Instructions
CC	=	gcc -Wall -Wextra -Werror
AR	= 	ar rc
RM	= 	rm -f

# Directories
inc =	inc
src =	src
obj =	obj

# Files
INC	=	$(wildcard $(inc)/*.h $(inc)/*/*.h $(inc)/*/*/*.h)
SRC	= 	$(wildcard $(src)/*.c $(src)/*/*.c $(src)/*/*/*.c)
OBJ	=	$(patsubst $(src)/%.c, $(obj)/%.o, $(SRC))


### RULES ###

# Main rules
all: $(OBJ)
	@$(AR) $(LIB) $(OBJ)
	@echo "File '$(LIB)' created."

clean:
	@$(RM) -r $(obj)
	@echo "Object files removed."

fclean: clean
	@$(RM) $(LIB)
	@echo "File '$(LIB)' removed."

re: fclean all
	@echo "It was recompiled."

.PHONY: all clean fclean re

$(obj)/%.o: $(src)/%.c
	@mkdir -p $(dir $@)
	@$(CC) -c $< -o $@
	@echo "File '$<' compiled."

# Makefile info
info:
	@echo "Library : $(LIB)"
	@echo
	@echo "Compile : '$(CC) (...)' + '$(AR) (...)'"
	@echo "Remove  : '$(RM) (...)'"
	@echo
	@echo "Headers :"
	@for file in $(INC); do echo "        · $$file"; done
	@echo "Sources :"
	@for file in $(SRC); do echo "        · $$file"; done
	@echo "Objects :"
	@for file in $(OBJ); do echo "        · $$file"; done
