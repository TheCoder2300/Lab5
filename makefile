# Makefile that can build, run, and clean the project

#Compiles code, renames executable
a.out: lab5.c++ printroll.c++ defs.h
	g++ -Wall Lab5.c++ printroll.c++
#Handles runnig of code
run: a.out
	./a.out

#Cleans up files
clean:
	rm -f a.out