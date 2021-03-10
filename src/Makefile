main: lab1project.o implementation.o history.o
	gcc -o run lab1project.o implementation.o history.o

lab1project.o: lab1project.c tokenizer.h
	gcc -c lab1project.c

implementation.o: implementation.c tokenizer.h
	gcc -c implementation.c

history.o: history.c history.h
	gcc -c history.c

clean:
	rm -f run *.o *~ *#
