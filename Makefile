CXX = g++
CXXFLAGS = -Wall -std=c++11
TARGET = sum
SRCS = sum.cpp
OBJS = $(SRCS:.cpp=.o)

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(TARGET)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(TARGET)

test: $(TARGET)
	./$(TARGET) 10
	./$(TARGET) 100
	./$(TARGET) 1000
	./$(TARGET) 10300
	./$(TARGET) 100300
