CC = g++
CFLAG = -std=c++11 -Wall

test-30: challenge-30-unittest.o
	$(CC) $(CFLAG) challenge-30-unittest.o -o test-30
	
challenge-30-unittest.o: challenge-30-unittest.cpp
	$(CC) $(CFLAG) -c challenge-30-unittest.cpp

clean:
	\rm *.o *.txt test-30

togithub:
	\cp *.cpp ../../toGitHub/challenge-30/
	\cp *.h ../../toGitHub/challenge-30/
