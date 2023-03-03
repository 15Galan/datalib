### VARIABLES ###

# Names
LIBRARY = 	DS
TEST_01	=	dll
TEST_02	=	que
TEST_03	=	stk
TEST_04	=	set

# Instructions
CC 		=	gcc -Wall -Wextra -Werror
AR 		= 	ar rc
RM 		= 	rm -f

# Files
SOURCES = 	$(wildcard Libft/*.c datalib/*.c)
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
	@$(RM) $(LIBRARY) $(wildcard tests/*.md)
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
	@echo "Tests	:	$(TEST_01) $(TEST_02) $(TEST_03) $(TEST_04)"
	@echo
	@echo "Compile	:	'$(CC) (...)' + '$(AR) (...)'"
	@echo "Remove	:	'$(RM) (...)'"
	@echo
	@echo "Sources	:	$(SOURCES)"
	@echo "Objects	:	$(OBJECTS)"
	@echo "Testing	:	$(TESTING)"

norm:
	@norminette $(SOURCES)

tests: all
	@$(CC) tests/$(TEST_01).c $(LIBRARY) -o $(TEST_01).out
	@$(CC) tests/$(TEST_02).c $(LIBRARY) -o $(TEST_02).out
	@$(CC) tests/$(TEST_03).c $(LIBRARY) -o $(TEST_03).out
	@$(CC) tests/$(TEST_04).c $(LIBRARY) -o $(TEST_04).out
	@echo "Test files created."
	@./$(TEST_01).out > tests/$(TEST_01).md
	@./$(TEST_02).out > tests/$(TEST_02).md
	@./$(TEST_03).out > tests/$(TEST_03).md
	@./$(TEST_04).out > tests/$(TEST_04).md
	@echo "Test files executed."
	@echo "Results saved in 'tests/'."
	@$(RM) *.out
