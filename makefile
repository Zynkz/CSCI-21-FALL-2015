CC = g++
CFLAG = -c -Wall

test-24: challenge-24-unittest.o
	$(CC) challenge-24-unittest.o -o test-24

challenge-24-unittest.o: challenge-24-unittest.cpp BSTNode.h
	$(CC) $(CFLAG) challenge-24-unittest.cpp

BSTNode.o: BSTNode.cpp BSTNode.h
	&(CC) &(CFLAG) BSTNode.cpp;

clean:
	\rm *.o test-24

togithub:
	\cp *.cpp ../../toGitHub/challenge-24/
	\cp *.h ../../toGitHub/challenge-24/