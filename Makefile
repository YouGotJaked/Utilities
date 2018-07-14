CXX				:= g++
SRC = main.cpp Payment.cpp Roommate.cpp Date.cpp
TARGET = main

.PHONY: clean

all:
	$(CXX) -o $(TARGET) $(SRC)

clean:
	-rm *.o $(objects)
	