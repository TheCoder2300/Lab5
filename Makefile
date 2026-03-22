 # Ian Glattli
 # CPSC 1070 Lab section 003
 # 03/23/2026
 # Lab 5C -- 3E Ctrl,Alt,Elite
 # Description: A program that takes in multiple students name, major,
 # school year, and CUID. Then prints info into formatted list

# Makefile that can build, run, and clean the project

#Compiles code
a.out: lab5.cpp printRoll.cpp defs.h
	g++ -Wall lab5.cpp printRoll.cpp
#Handles running of code
run: a.out
	./a.out

#Cleans up files
clean:
	rm -f a.out
