# need to run command make in same directory
# this will not echo if we have hello

# hello:
# 	echo "Hello, World"
# 	echo "This line will print in the terminal if the file hello does not exist."

# pre req blah.c added so that we will recompile if blah.c modified
# make decides if it should run the blah target. It will only run if blah does not exist, or blah.c is newer than blah
# usually find out if timestamp is changed
blah: blah.c
	cc blah.c -o blah