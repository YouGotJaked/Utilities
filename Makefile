CXX				:= g++
SRC = utilities.cpp Roommate.cpp Date.cpp
TARGET = utilities

all:
	$(CXX) -o $(TARGET) $(SRC)
