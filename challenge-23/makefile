CC = g++
CFLAG = -c -Wall

test-23: challenge-23-unittest.o
	$(CC) challenge-23-unittest.o -o test-23

challenge-23-unittest.o: challenge-23-unittest.cpp
	$(CC) $(CFLAG) challenge-23-unittest.cpp

clean:
	\rm *.o test-23

togithub:
	\cp *.cpp ../../toGitHub/challenge-23/
	\cp *.h ../../toGitHub/challenge-23/