##
## Makefile for infin_add in /home/exam/rendu/ex_4
## 
## Made by Exam User
## Login   <exam@epitech.net>
## 
## Started on  Sat Nov  8 09:46:12 2014 Exam User
## Last update Wed Dec 10 18:45:07 2014 Nathan Poirier
##

CC	= cc

CFLAGS	+= -Iinclude/

RM	= rm -f

SRC	= main.c	\
	  my_list.c	\
	  utils.c	\
	  utils2.c

OBJ	= $(SRC:.c=.o)

NAME	= ord_alphlong

$(NAME):	$(OBJ)
	$(CC) $(OBJ) -o $(NAME) $(CFLAGS)

all:	$(NAME)

clean:
	$(RM) $(OBJ)

fclean:		clean
	$(RM) $(NAME)

re:	fclean all

re:	all clean fclean re
