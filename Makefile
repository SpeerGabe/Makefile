#Gabriel Speer
#Makefile 9/22/2023
#To compile the provided files into one executable and run it on the command ./employee

#CC is the compiler(g++)
CC = g++
#CFLAGS is the flags or specific tests it runs through to make sure it works
CFLAGS = -g -Wall -Wextra

#this defines where the Makefile needs to start
default: employee

#all specifies the required dependecies
all:employee

#creates the executable employee out of the .o files and makes sure they don't cause bugs when combined together
employee: Employee.o Supervisor.o Officer.o main.o
	$(CC) $(CFlags) -o employee Employee.o Supervisor.o Officer.o main.o

#The reason certain .h files are added in in the .o files below are because,
#they are included into the code of other files being compiled.

#Compiles Employee.cpp and .h into Employee.o after testing for bugs or mistypes
Employee.o: Employee.cpp Employee.h
	$(CC) $(CFlags) -c Employee.cpp

#Compiles Employee.h, Supervisor.cpp and .h into Supervisor.o after testing for bugs or mistypes
Supervisor.o: Supervisor.cpp Supervisor.h Employee.h
	$(CC) $(CFlags) -c Supervisor.cpp

#Compiles Employee.h, Officer.cpp and .h into Officer.o after testing for bugs or mistypes
Officer.o: Officer.cpp Officer.h Employee.h
	$(CC) $(CFlags) -c Officer.cpp

#Compiles main.cpp Employee/Supervisor/Officer .h into main.o after testing for bugs or mistypes
main.o:	main.cpp Employee.h Supervisor.h Officer.h
	$(CC) $(CFLAGS) -c main.cpp

#Cleans out employee and all .o and ~ files to make your repo look better
clean:
	$(RM) employee *.o *~
