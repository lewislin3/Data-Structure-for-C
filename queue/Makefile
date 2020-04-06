queuetest: queuetest.o queue.o
	gcc -o queuetest -g queuetest.o queue.o


queuetest.o : queuetest.c queue.h
	gcc -g -c -Wall queuetest.c 

queue.o : queue.c queue.h
	gcc -g -c -Wall queue.c 

clean :
	rm -f *.o queuetest