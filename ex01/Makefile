# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lbastien <lbastien@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/27 17:07:24 by lbastien          #+#    #+#              #
#    Updated: 2024/09/05 13:24:03 by lbastien         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Compiler settings
CXX = c++
CXXFLAGS = -Wall -Werror -Wextra -std=c++98

# Target executable name
TARGET = animals

# Source, Object, Dependency files
SRC = main.cpp Animal.cpp Dog.cpp Cat.cpp Brain.cpp
OBJ = $(SRC:.cpp=.o)
DEP = $(OBJ:.o=.d)

# Default target
all: $(TARGET)

# Run target ignoring exit status
run: all
	-@./$(TARGET)

# Compile .cpp files into .o object files
%.o : %.cpp
	$(CXX) $(CXXFLAGS) -MMD -MP -c $< -o $@

# Link object files into the target executable
$(TARGET): $(OBJ) Makefile
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(TARGET)

# Clean up objects and dependency files
clean:
	rm -rf $(OBJ)
	rm -rf $(OBJ:.o=.d)
	
#Also clean up the target executable (ignore error if file does not exist)
fclean: clean
	-rm -f $(TARGET)

#Clean up and recompile
re: fclean all

# Include dependencies
-include $(DEP)