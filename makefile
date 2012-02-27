objects = main.o andy.o
CFLAGS=-g

all: compile
	@echo "Running programm ..."
	./main
compile: clean $(objects) 
	@echo "Compile result ..."
	cc -o main $(objects)
clean:
	@echo "Clean previouse compile result ...."
	rm -f *.o
	rm -f main
