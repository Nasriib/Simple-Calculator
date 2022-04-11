all: mycalculator.exe

# define a target to link the application
#
mycalculator.exe: mycalculator.o
        g++ -g -lm mycalculator.o -o mycalculator.exe

# define targets to compile the source code
#
mycalculator.o: mycalculator.cc lab10.h Makefile
        g++ -g -c mycalculator.cc -o mycalculator.o

# define a target to clean the directory
#
clean:
        rm -f mycalculator.o mycalculator.exe
