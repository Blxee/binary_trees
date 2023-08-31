CC = gcc
C_FLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89

.PHONY: 0

0-main: 0-* binary_trees.h
	$(CC) $^ -o $@
