CC = g++
CFLAG = -c -Wall

test-19: challenge-19-unittest.o SList.o SLNode.o
	$(CC) challenge-19-unittest.o SList.o SLNode.o -o test-19

challenge-19-unittest.o: challenge-19-unittest.cpp SList.h
	$(CC) $(CFLAG) challenge-19-unittest.cpp

SList.o: SList.cpp SList.h SLNode.h
	$(CC) $(CFLAG) SList.cpp
	
SLNode.o: SLNode.cpp SLNode.h
	$(CC) $(CFLAG) SLNode.cpp
	

clean:
	\rm *.o test-19

togithub:
	\cp *.cpp ../../toGitHub/challenge-19/
	\cp *.h ../../toGitHub/challenge-19/