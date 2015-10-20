CC = g++
CFLAG = -c -Wall

test-18: challenge-18-unittest.o SList.o SLNode.o
	$(CC) challenge-18-unittest.o SList.o SLNode.o -o test-18

challenge-18-unittest.o: challenge-18-unittest.cpp SList.h
	$(CC) $(CFLAG) challenge-18-unittest.cpp

SList.o: SList.cpp SList.h SLNode.h
	$(CC) $(CFLAG) SList.cpp
	
SLNode.o: SLNode.cpp SLNode.h
	$(CC) $(CFLAG) SLNode.cpp
	

clean:
	\rm *.o test-18

togithub:
	\cp *.cpp ../../toGitHub/challenge-18/
	\cp *.h ../../toGitHub/challenge-18/