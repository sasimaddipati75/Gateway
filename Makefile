# creating the make file for the project 

TARGET = app
SRC_MAIN = src/main.c

$(TARGET) : main.o config.o logger.o
	gcc main.o config.o logger.o -o $(TARGET)
	
main.o : $(SRC_MAIN)
	gcc -Iinclude -c $(SRC_MAIN)

config.o : src/config.c
	gcc -Iinclude -c src/config.c	
	
logger.o : src/logger.c
	gcc -Iinclude -c src/logger.c	
	
clean : 
	rm -f main.o config.o $(TARGET)	
		
	
