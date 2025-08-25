CXX=g++
CXXFLAGS=-Wall -Wextra -pedantic -std=c++20
SOURCES= main.cpp class.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=myprogram

all: $(SOURCES) $(EXECUTABLE)

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(CXXFLAGS) $(OBJECTS) -o $(EXECUTABLE)

.cpp.o:
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJECTS) $(EXECUTABLE)
