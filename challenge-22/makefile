CC = g++
CFLAG = -c -Wall

test-22: challenge-22-unittest.o
	$(CC) challenge-22-unittest.o -o test-22

challenge-22-unittest.o: challenge-22-unittest.cpp SLNode.h SList.h
	$(CC) $(CFLAG) challenge-22-unittest.cpp

clean:
	\rm *.o test-22

togithub:
	\cp *.cpp ../../toGitHub/challenge-22/
	\cp *.h ../../toGitHub/challenge-22/