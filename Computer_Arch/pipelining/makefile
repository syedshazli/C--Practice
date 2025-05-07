run: pipelining.o runningInstructions.o
	g++ -o run pipelining.o runningInstructions.o


pipelining.o: pipelining.cpp
	g++ -c pipelining.cpp

runningInstructions.o: runningInstructions.cpp runningInstructions.hpp
	g++ -c runningInstructions.cpp


clean:
	rm -f run
	rm -f runningInstructions.o
	rm -f pipelining.o