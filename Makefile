#
#Author: Justin Wong
#Course: CSCI-135
#Instructor: Mr. Zamansky
#Assignment: Lab4 Makefile
#
#The make file for lab 4
#
#
main: main.o functions.o
	g++ -o main main.o functions.o

main.o: main.cpp functions.h
	g++ -c main.cpp

functions.o: functions.cpp functions.h
	g++ -c functions.cpp

clean:
	rm -f main.o functions.o
