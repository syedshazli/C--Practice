ref: main.o refer.o
	g++ -o ref main.o refer.o


main.o: main.cpp
	g++ -c main.cpp

refer.o: refer.cpp refer.hpp
	g++ -c refer.cpp


clean:
	rm -f ref
	rm -f refer.o
	rm -f main.o