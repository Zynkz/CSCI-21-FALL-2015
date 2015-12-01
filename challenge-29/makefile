CC=g++
CFLAG = -std=c++11 -Wall

test-29: challenge-29-unittest.o
	$(CC) $(CFLAG) challenge-29-unittest.o -o test-29
	
challenge-29-unittest.o: challenge-29-unittest.cpp
	$(CC) $(CFLAG) -c challenge-29-unittest.cpp

clean:
	\rm *.o *.txt test-29

togithub:
	\cp *.cpp ../../toGitHub/challenge-29/
	\cp *.h ../../toGitHub/challenge-29/