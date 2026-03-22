# Makefile that can build, run, and clean the project

#Compiles code, renames executable
a.out: lab5.cpp printRoll.cpp defs.h
	g++ -Wall lab5.cpp printRoll.cpp
#Handles runnig of code
run: a.out
	./a.out

#Cleans up files
clean:
	rm -f a.out
