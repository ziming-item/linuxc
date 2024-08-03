#Makefile 变量的使用
objects = main.o input.o calcu.o
main: $(objects)
	gcc -o main $(objects)
main.o: main.c
	gcc -c main.c
input.o: input.c
	gcc -c input.c
calcu.o: calcu.c
	gcc -c calcu.c
clean:
	rm *.o
	rm main