CC = g++
CFLAG = -c -Wall

test-28: challenge-28-unittest.o item.o fooditem.o magicitem.o
	$(CC) challenge-28-unittest.o item.o fooditem.o magicitem.o -o test-28

challenge-28-unittest.o: challenge-28-unittest.cpp item.h fooditem.h magicitem.h
	$(CC) $(CFLAG) challenge-28-unittest.cpp

item.o: item.cpp item.h
	$(CC) $(CFLAG) item.cpp
	
fooditem.o: fooditem.cpp fooditem.h item.h
	$(CC) $(CFLAG) fooditem.cpp
	
magicitem.o: magicitem.cpp magicitem.h item.h
	$(CC) $(CFLAG) magicitem.cpp

clean:
	\rm *.o *.txt test-28

togithub:
	\cp *.cpp ../../toGitHub/challenge-28/
	\cp *.h ../../toGitHub/challenge-28/
