CC = g++
CFLAG = -c -Wall

linux-project3: DLLDriver.o DLList.o DLNode.o
	$(CC) DLLDriver.o DLList.o DLNode.o -o linux-project3
	
DLLDriver.o: DLLDriver.cpp DLList.h
	$(CC) $(CFLAG) DLLDriver.cpp

DLList.o: DLList.cpp DLList.h DLNode.h
	$(CC) $(CFLAG) DLList.cpp
	
DLNode.o: DLNode.cpp DLNode.h
	$(CC) $(CFLAG) DLNode.cpp

clean:
	\rm *.o *.txt linux-project3

togithub:
	\cp *.cpp ../../toGitHub/project-3/
	\cp *.h ../../toGitHub/project-3/
