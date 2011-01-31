CC = g++
FLAGS = -I/usr/local/include/boost -L/usr/local/lib -lboost_system -lboost_thread

carbine: connection.o main.o
	$(CC) -o carbine connection.o main.o $(FLAGS) 

main.o:
	$(CC) -c main.cpp $(FLAGS)

connection.o: connection.cpp connection.h
	$(CC) -c connection.cpp $(FLAGS) 
	
clean:
	rm *.o carbine
