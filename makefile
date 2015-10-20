CC = g++
CFLAG = -Wall

all: project-1 project-2

project-1: project-1.cpp
	$(CC) $(CFLAG) project-1.cpp -o project-1.e

project-2: project-2.cpp
	$(CC) $(CFLAG) project-2.cpp -o project-2.e 2> p2.err

cleanerr:
	\mv *.err ../trash

cleanall:
	\rm *.e
	
togithub:
	\cp *.cpp ../toGitHub
	\cp makefile ../toGitHub