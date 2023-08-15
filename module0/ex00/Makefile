NAME = megaphone

CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = megaphone.cpp

all: $(NAME)

$(NAME): $(SRC)
	@$(CXX) $(CXXFLAGS) -o $(NAME) $(SRC)
	@echo "\n ℂ✚✚ Program compiled ✅ \n"

clean:
	@echo "\n ？ No objects to clean ❌ \n"

fclean: clean
	@rm -rf $(NAME)
	@echo "\n 💥 Executable destroyed ✅ \n"

re: fclean all

.PHONY: all fclean clean re