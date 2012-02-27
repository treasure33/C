objects = main.o andy.o
CFLAGS=-g

all: compile
	@echo "Running programm ..."
	./main
compile: $(objects) 
	@echo "Compile result ..."
	cc -o main $(objects)
${objects}: andy.h
clean:
	@echo "Clean previouse compile result ...."
	rm -f *.o
	rm -f main
