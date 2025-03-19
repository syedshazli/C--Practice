# need to run command make in same directory
# this will not echo if we have hello

# hello:
# 	echo "Hello, World"
# 	echo "This line will print in the terminal if the file hello does not exist."

# pre req blah.c added so that we will recompile if blah.c modified
# make decides if it should run the blah target. It will only run if blah does not exist, or blah.c is newer than blah
# usually find out if timestamp is changed

# run ./blah after this is done to get output of blah.c

#runs third, requires blah.o target so it searches for it
blah: blah.o
	cc blah.o -o blah 

# runs second, requires blah.c target so it searches for it
blah.o: blah.c
	cc -c blah.c -o blah.o 

# runs first, no dependencies
blah.c:
	echo "int main() {return 0;}" > blah.c

# removes blah.o and blah using make clean
clean:
	rm -f blah
	rm -f blah.o