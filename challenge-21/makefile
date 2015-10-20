CC = g++
CFLAG = -c -Wall

test-21: challenge-21-unittest.o
	$(CC) challenge-21-unittest.o -o test-21

challenge-21-unittest.o: challenge-21-unittest.cpp box.h
	$(CC) $(CFLAG) challenge-21-unittest.cpp

clean:
	\rm *.o test-21

togithub:
	\cp *.cpp ../../toGitHub/challenge-21/
	\cp *.h ../../toGitHub/challenge-21/