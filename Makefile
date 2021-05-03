%.o:%.c
	gcc -c -g $^

rent: rent.o
	gcc -o rent rent.o

clean:
	$(RM) *.o 