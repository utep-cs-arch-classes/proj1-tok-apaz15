main: lab1project.o implementation.o
	gcc -o run lab1project.o implementation.o

lab1project.o: lab1project.c tokenizer.h
	gcc -c lab1project.c

implementation.o: implementation.c tokenizer.h
	gcc -c implementation.c

clean:
	rm -f run *.o *~ *#
