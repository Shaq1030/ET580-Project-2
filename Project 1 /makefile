# executable file to create and its dependencies
prog : Driver_Phase1.o Container.o
	g++ -std=c++11 -o prog Driver_Phase1.o Container.o

# file dependencies
Driver_Phase1.o : Container.h
	g++ -std=c++11 -c Driver_Phase1.cpp

Container.o : Container.h
	g++ -std=c++11 -c Container.cpp

# remove all object and executable files
clean:
	rm -f *.o
	rm -f prog