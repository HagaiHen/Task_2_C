all: connections 

connections: main.o my_mat.o
	gcc -Wall -g main.o my_mat.o -o connections
	
my_mat.o: my_mat.c my_mat.h
	gcc -Wall -g -c my_mat.c
main.o: main.c my_mat.h
	gcc -Wall -g -c main.c 

.PHONY: clean all

clean:
	rm -f *.o connections