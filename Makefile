# creating the make file for the project 

TARGET = app
SRC_MAIN = src/main.c

$(TARGET) : main.o config.o logger.o daemon.o meter.o gateway.o
	gcc main.o config.o logger.o daemon.o meter.o gateway.o -o $(TARGET) -pthread
	
main.o : $(SRC_MAIN)
	gcc -Iinclude -c $(SRC_MAIN)

config.o : src/config.c
	gcc -Iinclude -c src/config.c	
	
logger.o : src/logger.c
	gcc -Iinclude -c src/logger.c	

daemon.o : src/daemon.c
	gcc -Iinclude -c src/daemon.c

meter.o : src/meter.c
	gcc -Iinclude -c src/meter.c

gateway.o : src/gateway.c
	gcc -Iinclude -c src/gateway.c

clean : 
	rm -f main.o config.o logger.o daemon.o meter.o $(TARGET)	
		
	
