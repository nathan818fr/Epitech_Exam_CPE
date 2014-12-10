##
## Makefile for infin_add in /home/exam/rendu/ex_4
## 
## Made by Exam User
## Login   <exam@epitech.net>
## 
## Started on  Sat Nov  8 09:46:12 2014 Exam User
## Last update Sat Nov  8 10:30:28 2014 Exam User
##

CC	= cc

CFLAGS	+= -Iinclude/

RM	= rm -f

SRC	= infin_add.c	\
	  calc_add.c	\
	  calc_sub.c	\
	  utils.c

OBJ	= $(SRC:.c=.o)

NAME	= infin_add

$(NAME):	$(OBJ)
	$(CC) $(OBJ) -o $(NAME) $(CFLAGS)

all:	$(NAME)

clean:
	$(RM) $(OBJ)

fclean:		clean
	$(RM) $(NAME)

re:	fclean	all
