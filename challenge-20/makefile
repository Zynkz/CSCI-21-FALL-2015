CC = g++
CFLAG = -c -Wall

test-20: challenge-20-unittest.o SList.o SLNode.o
	$(CC) challenge-20-unittest.o SList.o SLNode.o -o test-20

challenge-20-unittest.o: challenge-20-unittest.cpp SList.h
	$(CC) $(CFLAG) challenge-20-unittest.cpp

SList.o: SList.cpp SList.h SLNode.h
	$(CC) $(CFLAG) SList.cpp
	
SLNode.o: SLNode.cpp SLNode.h
	$(CC) $(CFLAG) SLNode.cpp
	

clean:
	\rm *.o test-20

togithub:
	\cp *.cpp ../../toGitHub/challenge-20/
	\cp *.h ../../toGitHub/challenge-20/