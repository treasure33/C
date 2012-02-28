objects = main.o andy_led.o
CFLAGS=-g

all: compile
	@echo "Running programm ..."
	./main
compile: $(objects) 
	@echo "Compile result ..."
	cc -o main $(objects)
${objects}: andy_led.h
clean:
	@echo "Clean previouse compile result ...."
	rm -f *.o
	rm -f main
