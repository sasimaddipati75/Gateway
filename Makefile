# creating the make file for the project 

TARGET = app
SRC = src/main.c

$(TARGET) : main.o
	gcc main.o -o $(TARGET)
	
main.o : $(SRC)
	gcc -c $(SRC)
	
clean : 
	rm -f main.o $(TARGET)	
		
	
