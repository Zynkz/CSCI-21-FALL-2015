CC = g++
CFLAG = -c -Wall

test-27: challenge-27-unittest.o BSTNode.o bstree.o
	$(CC) challenge-27-unittest.o BSTNode.o bstree.o -o test-27

challenge-27-unittest.o: challenge-27-unittest.cpp bstree.h utility.h
	$(CC) $(CFLAG) challenge-27-unittest.cpp

BSTNode.o: BSTNode.cpp BSTNode.h
	$(CC) $(CFLAG) BSTNode.cpp;
	
bstree.o: bstree.cpp bstree.h BSTNode.h utility.h
	$(CC) $(CFLAG) bstree.cpp;

clean:
	\rm *.o *.txt test-27

togithub:
	\cp *.cpp ../../toGitHub/challenge-27/
	\cp *.h ../../toGitHub/challenge-27/
