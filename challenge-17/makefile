CC = g++
CFLAG = -c -Wall

test-17: challenge-17-unittest.o SLNode.o
	$(CC) challenge-17-unittest.o SLNode.o -o test-17

challenge-17-unittest.o: challenge-17-unittest.cpp SLNode.h
	$(CC) $(CFLAG) challenge-17-unittest.cpp

SLNode.o: SLNode.cpp SLNode.h
	$(CC) $(CFLAG) SLNode.cpp
	
clean:
	\rm *.o test-17

togithub:
<<<<<<< HEAD
	\cp *.cpp ../../toGitHub/challenge-17/
	\cp *.h ../../toGitHub/challenge-17/
=======
	\cp *.cpp ../../toGitHub
	\cp *.h ../../toGitHub
>>>>>>> upstream/master
