CC = g++
CFLAG = -Wall

all: challenge-1 challenge-2 challenge-3 challenge-4 challenge-5 challenge-6 challenge-7 challenge-8 challenge-9 challenge-10 challenge-11 challenge-11 challenge-12 challenge-13 challenge-14 challenge-15 challenge-16 project-1 project-2

challenge-1:
	$(CC) $(CFLAG) challenge-1.cpp -o challenge-1.e
	
challenge-2: challenge-2.cpp
	$(CC) $(CFLAG) challenge-2.cpp -o challenge-2.e

challenge-3: challenge-3.cpp
	$(CC) $(CFLAG) challenge-3.cpp -o challenge-3.e

challenge-4: challenge-4.cpp
	$(CC) $(CFLAG) challenge-4.cpp -o challenge-4.e

challenge-5: challenge-5.cpp
	$(CC) $(CFLAG) challenge-5.cpp -o challenge-5.e

challenge-6: challenge-6.cpp
	$(CC) $(CFLAG) challenge-6.cpp -o challenge-6.e
	
challenge-7: challenge-7.cpp
	$(CC) $(CFLAG) challenge-7.cpp -o challenge-7.e
	
challenge-8: challenge-8.cpp
	$(CC) $(CFLAG) challenge-8.cpp -o challenge-8.e

project-1: project-1.cpp
	$(CC) $(CFLAG) project-1.cpp -o project-1.e
	
challenge-9: challenge-9.cpp
	$(CC) $(CFLAG) challenge-9.cpp -o challenge-9.e
	
challenge-10: challenge-10.cpp
	$(CC) $(CFLAG) challenge-10.cpp -o challenge-10.e
	
challenge-11: challenge-11.cpp
	$(CC) $(CFLAG) challenge-11.cpp -o challenge-11.e
	
challenge-12: challenge-12.cpp
	$(CC) $(CFLAG) challenge-12.cpp -o challenge-12.e
	
challenge-13: challenge-13.cpp
	$(CC) $(CFLAG) challenge-13.cpp -o challenge-13.e
	
challenge-14: challenge-14.cpp
	$(CC) $(CFLAG) challenge-14.cpp -o challenge-14.e
	
challenge-15: challenge-15.cpp
	$(CC) $(CFLAG) challenge-15.cpp -o challenge-15.e

project-2: project-2.cpp
	$(CC) $(CFLAG) project-2.cpp -o project-2.e 2> p2.err
	
challenge-16: challenge-16.cpp
	$(CC) $(CFLAG) challenge-16.cpp -o challenge-16.e 2> c16.err

cleanerr:
	\mv *.err ../trash

cleanall:
	\rm *.e
	
togithub:
	\cp *.cpp ../toGitHub
	\cp makefile ../toGitHub