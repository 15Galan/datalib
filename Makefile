### VARIABLES ###

# Names
LIBRARY = 	DS
TEST_01	=	test_ll
TEST_02	=	test_dll
TEST_03	=	test_qu
TEST_04	=	test_sk
TEST_05	=	test_st
TEST_06	=	test_bt

# Instructions
CC 		=	gcc -Wall -Wextra -Werror
AR 		= 	ar rc
RM 		= 	rm -f

# Files
SOURCES = 	$(wildcard minilib/* datalib/*.c)
OBJECTS =	$(SOURCES:.c=.o)
TESTING	= 	$(wildcard tests/*.c)


### RULES ###

# Main rules
all: $(OBJECTS)
	@$(AR) $(LIBRARY) $(OBJECTS)
	@echo "File '$(LIBRARY)' created."

clean:
	@$(RM) -r $(OBJECTS)
	@echo "Object files removed."

fclean: clean
	@$(RM) $(LIBRARY) $(TEST)
	@echo "File '$(LIBRARY)' removed."

re: fclean all
	@echo "It was recompiled."

.PHONY: all clean fclean re

%.o: %.c
	@$(CC) -c $< -o $@
	@echo "- File '$<' compiled."

# Testing rules
see:
	@echo "Library	:	$(LIBRARY)"
	@echo "Tests	:	$(TEST_01) $(TEST_02) $(TEST_03) $(TEST_04) $(TEST_05)"
	@echo
	@echo "Compile	:	'$(CC) (...)' + '$(AR) (...)'"
	@echo "Remove	:	'$(RM) (...)'"
	@echo
	@echo "Sources	:	$(SOURCES)"
	@echo "Objects	:	$(OBJECTS)"
	@echo "Testing	:	$(TEST_01)"

test: all
	@$(CC) tests/dll.c $(LIBRARY) -o $(TEST_02)
	@echo "Test file created."
