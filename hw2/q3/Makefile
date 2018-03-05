CXX = g++
CXXFLAGS = -std=c++14 -Wall -c
LXXFLAGS = -std=c++14
OBJECTS = main.o queue.o
TARGET = main


$(TARGET): $(OBJECTS)
	$(CXX) $(LXXFLAGS) $(OBJECTS) -o $(TARGET)
main.o: main.cpp queue.h
	$(CXX) $(CXXFLAGS) main.cpp
queue.o: queue.cpp
	$(CXX) $(CXXFLAGS) queue.cpp
clean:
	rm -f $(TARGET) $(OBJECTS)

