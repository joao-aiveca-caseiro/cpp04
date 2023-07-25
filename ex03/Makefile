SRCS		= AMateria.cpp\
				Character.cpp\
				Cure.cpp\
				Ice.cpp\
				ICharacter.cpp\
				IMateriaSource.cpp\
				MateriaSource.cpp\
				main.cpp
INCS		= AMateria.hpp\
				Character.hpp\
				Cure.hpp\
				Ice.hpp\
				ICharacter.hpp\
				IMateriaSource.hpp\
				MateriaSource.hpp
OBJS		= ${SRCS:.cpp=.o}
NAME		= test
CXX			= c++
CXXFLAGS		= -Wall -Wextra -Werror -std=c++98 -fsanitize=address

$(NAME):	${OBJS} ${INCS}
			${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}

all:		$(NAME)

clean:
			${RM} ${OBJS}

fclean:		clean
			${RM} $(NAME)

re:			fclean all