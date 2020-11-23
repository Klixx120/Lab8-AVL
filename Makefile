TARGETS = AVL
CC = g++
CCFLAGS = -std=c++11 -g
AVL: main.cpp AVLInterface.h NodeInterface.h AVL.h AVL.cpp Node.h Node.cpp
	$(CC) $(CCFLAGS) -o AVL main.cpp AVL.cpp Node.cpp
