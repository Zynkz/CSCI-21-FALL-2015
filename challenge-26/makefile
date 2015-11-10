CC = g++
CFLAG = -c -Wall

test-26: challenge-26-unittest.o BSTNode.o bstree.o
	$(CC) challenge-26-unittest.o BSTNode.o bstree.o -o test-26

challenge-26-unittest.o: challenge-26-unittest.cpp bstree.h
	$(CC) $(CFLAG) challenge-26-unittest.cpp

BSTNode.o: BSTNode.cpp BSTNode.h
	$(CC) $(CFLAG) BSTNode.cpp;
	
bstree.o: bstree.cpp bstree.h BSTNode.h
	$(CC) $(CFLAG) bstree.cpp;

clean:
	\rm *.o *.txt test-26

togithub:
	\cp *.cpp ../../toGitHub/challenge-26/
	\cp *.h ../../toGitHub/challenge-26/
