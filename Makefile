# creating the make file for the project 

TARGET = app
SRC_MAIN = src/main.c

$(TARGET) : main.o config.o
	gcc main.o config.o -o $(TARGET)
	
main.o : $(SRC_MAIN)
	gcc -Iinclude -c $(SRC_MAIN)

config.o : src/config.c
	gcc -Iinclude -c src/config.c	
	
clean : 
	rm -f main.o config.o $(TARGET)	
		
	
