CC = g++
CFLAG = -c -Wall

test-25: challenge-25-unittest.o BSTNode.o bstree.o
	$(CC) challenge-25-unittest.o BSTNode.o bstree.o -o test-25

challenge-25-unittest.o: challenge-25-unittest.cpp bstree.h
	$(CC) $(CFLAG) challenge-25-unittest.cpp

BSTNode.o: BSTNode.cpp BSTNode.h
	$(CC) $(CFLAG) BSTNode.cpp;
	
bstree.o: bstree.cpp bstree.h BSTNode.h
	$(CC) $(CFLAG) bstree.cpp;

clean:
	\rm *.o *.txt test-25

togithub:
	\cp *.cpp ../../toGitHub/challenge-25/
	\cp *.h ../../toGitHub/challenge-25/
